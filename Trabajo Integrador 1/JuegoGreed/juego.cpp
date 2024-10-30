#include "juego.h"

#include <iostream>
#include <vector>

using namespace std;

int tirarUnDado() { return rand() % 6 + 1; }

void tirarNDados(int vDados[], int cantidad) {
  for (int i = 0; i < cantidad; i++) {
    vDados[i] = tirarUnDado();
  }
}

void mostrarDados(int vDados[], int cantidad) {
  for (int i = 0; i < cantidad; i++) {
    cout << " " << vDados[i];
  }

  cout << endl;
}

int calcularPuntaje(int vDados[], int dadosBloqueadores[],
                    int &dadosRestantes) {
  int puntos = 0;
  int restar = 0;
  for (int i = 0; i < dadosRestantes; i++) {
    if (vDados[i] == dadosBloqueadores[0] ||
        vDados[i] == dadosBloqueadores[1]) {
      restar += 1;
    } else {
      puntos += vDados[i];
    }
  }

  dadosRestantes = dadosRestantes - restar;

  return puntos;
}

// void jugar(int &puntajeGanador, string &nombreGanador) {
// Recibe los parámetros sólo para pasarlos a otras funciones.
// Sería mejor que reciba el nombre por valor y el resultado por referencia
// para hacer los cálculos por fuera De esa manera jugar se encarga de jugar y
// devuelve el puntaje. Tomar el nombre y calcular los resultados M-Lo manejan
// otras funciones
void jugar(string jugadores[], int resultado[][3], int cantJugadores) {
  system("cls");
  for (int rondaActual = 1; rondaActual <= 3; rondaActual++) {
    for (int jugador = 0; jugador < cantJugadores; jugador++) {
      jugarUnaRonda(jugadores[jugador], resultado[jugador], rondaActual);
    }
  }
}

void partidaUnJugador(string jugador, int resultado[3]) {
  system("cls");
  for (int rondaActual = 1; rondaActual <= 3; rondaActual++) {
    jugarUnaRonda(jugador, resultado, rondaActual);
  }
}

void partidaDosJugadores(string jugador1, string jugador2, int resultado1[3],
                         int resultado2[3]) {
  system("cls");
  for (int rondaActual = 1; rondaActual <= 3; rondaActual++) {
    jugarUnaRonda(jugador1, resultado1, rondaActual);
    jugarUnaRonda(jugador2, resultado2, rondaActual);
  }
}

string pedirNombre(string jugador) {
  string name;
  cout << jugador << ", por favor ingrese su nombre: ";
  cin >> name;
  return name;
}

void saludar(string name) {
  cout << "¡Hola " << name << "! " << "¡Bienvenido a GREED!" << endl;
}

void mostrarPuntajeDeRonda(int vec[], int cantidad) {
  int i;

  for (i = 0; i < cantidad; i++) {
    cout << "Round " << i + 1 << " :" << vec[i] << endl;
  }
}

int obtenerPuntajeTotal(int puntajeRondas[]) {
  int resultado = 0;

  for (int i = 0; i < 3; i++) {
    resultado = resultado + puntajeRondas[i];
  }
  return resultado;
}

void finDelaPartida(int dadosPuntajes[], int rondaActual, int cantidadDeDados) {
  if (cantidadDeDados == 0) {
    dadosPuntajes[rondaActual - 1] = 0;
  }
}

bool sonTodosIguales(int vec[], int tam) {
  for (int i = 1; i < tam; i++) {
    if (vec[i] != vec[0]) {
      return false;
    }
  }
  return true;
}

// Ordena el ranking utilizando el algoritmo de ordenamiento por selección, de
// mayor a menor
void ordenarRanking(int rankingPuntos[6], string rankingNombres[6],
                     int largoRanking) {
  // Declara un indice para recorrer las posiciones del vector,
  // Un indice del valor más grande para reordenar después
  // Un subIndice j para comparar los restantes con el mayor
  // Dos variables temporales para guardar el valor y el nombre
  int indiceActual, indiceMayorValor, j, valorTemporal;
  string nombreTemporal;

  // El primer loop recorre todas las posiciones del 0 a largoRanking-1
  for (indiceActual = 0; indiceActual < largoRanking - 1; indiceActual++) {
    indiceMayorValor = indiceActual;

    // En el segundo loop se utiliza j para comparar por el mayor valor,
    // guardando el indice del mayor valor
    for (j = indiceActual; j < largoRanking; j++) {
      if (rankingPuntos[j] > rankingPuntos[indiceMayorValor]) {
        indiceMayorValor = j;
      }
    }

    // Una vez que ya se recorrió todo el vector sabemos el índice con el valor
    // mayor, y se intercambia con el indiceActual, de esta manera el índice [0]
    // va a tener el mayor valor de todos, el [1] el siguiente mayor, y así hasta
    // el final.

    // Acá intercambio se hace en los dos vectores para que
    // coincida nombre y puntaje
    valorTemporal = rankingPuntos[indiceActual];
    nombreTemporal = rankingNombres[indiceActual];

    rankingPuntos[indiceActual] = rankingPuntos[indiceMayorValor];
    rankingNombres[indiceActual] = rankingNombres[indiceMayorValor];

    rankingPuntos[indiceMayorValor] = valorTemporal;
    rankingNombres[indiceMayorValor] = nombreTemporal;
  }
}



// Para calcular estadistica
void ingresarEstadistica(int puntaje, string nombre, int rankingPuntos[6],
                         string rankingNombres[6]) {

  rankingPuntos[5] = puntaje;
  rankingNombres[5] = nombre;

  ordenarRanking(rankingPuntos, rankingNombres,6);

}

void determinarGanadorDosJugadores (int puntaje1, string nombre1,int puntaje2, string nombre2){
  if (puntaje1 > puntaje2) {
    cout << "    ¡Felicidades " << nombre1 << ", ganaste con el mayor puntaje!"
         << endl
         << endl;
  } else if (puntaje1 < puntaje2) {
    cout << "    ¡Felicidades " << nombre2 << ", ganaste con el mayor puntaje!"
         << endl
         << endl;
  } else {
    cout << "    ¡Felicidades " << nombre2 << ", empataron!"
         << endl
         << endl;

  }
}

void determinarGanadorUnJugador (int puntaje, string nombre, int rankingPuntos[6]){
  if (puntaje > rankingPuntos[0]) {
    cout << "    ¡Felicidades " << nombre << ", ganaste con el mayor puntaje!"
         << endl
         << endl;
  } 
}



void jugarUnaRonda(string nombre, int resultado[3], int numeroDeRonda) {
  // M-Juega una ronda
  int dadosJuego[5], dadosBloqueadores[2];
  tirarNDados(dadosBloqueadores, 2);
  int tiradaActual = 0;
  int dadosDisponibles = 5;
  bool seguirTirando = true;

  while (dadosDisponibles != 0 && seguirTirando) {
    cout << "Jugador: " << nombre;
    cout << endl << "NUMERO DE RONDA: " << numeroDeRonda << endl;
    tirarNDados(dadosJuego, dadosDisponibles);

    tiradaActual = tiradaActual + 1;
    cout << "DADOS BLOQUEADORES" << endl;
    mostrarDados(dadosBloqueadores, 2);
    cout << endl << "TIRADA DE DADOS NUMERO " << tiradaActual << endl;
    mostrarDados(dadosJuego, dadosDisponibles);

    if (dadosDisponibles > 1 && sonTodosIguales(dadosJuego, dadosDisponibles)) {
      resultado[numeroDeRonda - 1] =
          resultado[numeroDeRonda - 1] +
          calcularPuntaje(dadosJuego, dadosBloqueadores, dadosDisponibles) * 2;

    } else {
      resultado[numeroDeRonda - 1] =
          resultado[numeroDeRonda - 1] +
          calcularPuntaje(dadosJuego, dadosBloqueadores, dadosDisponibles);
    }
    cout << "Dados disponibles para la proxima tirada: " << dadosDisponibles
         << endl;

    finDelaPartida(resultado, numeroDeRonda, dadosDisponibles);
    cout << endl << "PUNTAJE RONDAS " << endl;
    mostrarPuntajeDeRonda(resultado, 3);
    cout << "Puntaje Total: " << obtenerPuntajeTotal(resultado) << endl;

    if (dadosDisponibles == 0) {
      cout << endl
           << "Ha perdido todos los dados, presione una tecla para continuar..."
           << endl;
    } else {

    cout << endl
         << "Si quiere seguir tirando presione 1 o si quiere terminar la "
            "ronda presione 2: "
         << endl;
    }

    int jugadorContinua;  // 1- Continua. 2-No Continua
    cin >> jugadorContinua;

    if (jugadorContinua == 2) {
      seguirTirando = false;
    }

    system("cls");
  }
}
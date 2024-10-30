#include "menu.h"

#include <ctime>
#include <iostream>
#include <vector>

#include "juego.h"

using namespace std;

int opcionesDelJuego() {
  int opcion;
  cout << "         GREED      " << endl;
  cout << "-----------------------" << endl;
  cout << "1 - MODO UN JUGADOR" << endl;
  cout << "2 - MODO DOS JUGADORES" << endl;
  cout << "3 - ESTADÍSTICAS" << endl;
  cout << "4 - CRÉDITOS" << endl;
  cout << "-----------------------" << endl;
  cout << "0- SALIR" << endl;
  cout << "-----------------------" << endl << endl;

  cout << "Seleccione Una Opción: ";
  cin >> opcion;

  cout << endl;
  system("cls");

  return opcion;
}

void ejecutarOpciones(int opcion, int &puntajeGanador, string &nombreGanador,
                      int rankingPuntos[6], string rankingNombres[6]) {
  switch (opcion) {
    case 1: {
      // funciones para un jugador

   
      string jugador = pedirNombre("Jugador 1");

      system("cls");

      cout << "¡Hola " << jugador << "! " << "¡Bienvenido a GREED!" << endl;

      cout << endl << "Presione una tecla para iniciar el juego...";
      system("pause>nul");

      int puntajeRondas[3]{0, 0, 0};

      partidaUnJugador(jugador, puntajeRondas);

      // Para estadisticas: calcula , guarda el mayor puntaje y muestra mensaje
      // si fue el mas alto.
      int puntajeTotal = obtenerPuntajeTotal(puntajeRondas);
      determinarGanadorUnJugador(puntajeTotal, jugador, rankingPuntos);
      ingresarEstadistica(puntajeTotal, jugador, rankingPuntos, rankingNombres);

      cout << "Jugador: " << jugador;
      cout << "Puntaje Total: " << puntajeTotal << endl;

      cout << endl << "Presione una tecla para volver al menú...";
      system("Pause>nul");

      break;
    }
    case 2: {
      // funciones para dos jugadores
      string jugador1 = pedirNombre("Jugador 1");
      string jugador2 = pedirNombre("Jugador 2");

      int resultadosJ1[3]{0, 0, 0};
      int resultadosJ2[3]{0, 0, 0};

      partidaDosJugadores(jugador1, jugador2, resultadosJ1, resultadosJ2);

      int puntajeJugador1 = obtenerPuntajeTotal(resultadosJ1);
      int puntajeJugador2 = obtenerPuntajeTotal(resultadosJ2);

      cout << "Jugador: " << jugador1 << endl;
      cout << "Puntaje Total: " << puntajeJugador1 << endl;

      cout << "Jugador: " << jugador2 << endl;
      cout << "Puntaje Total: " << puntajeJugador2 << endl;

      determinarGanadorDosJugadores(puntajeJugador1, jugador1, puntajeJugador2,
                                    jugador2);

      ingresarEstadistica(puntajeJugador1, jugador1, rankingPuntos,
                          rankingNombres);
      ingresarEstadistica(puntajeJugador2, jugador2, rankingPuntos,
                          rankingNombres);

      cout << endl << "Presione una tecla para volver al menú...";
      system("Pause>nul");

      break;
    }
    case 3:
      // funciones para estadisticas
      mostrarEstadistica(rankingPuntos, rankingNombres);
      cout << endl << "Presione una tecla para volver al menú...";
      system("Pause>nul");

      break;
    case 4:
      mostrarCreditos();
      cout << endl << "Presione una tecla para volver al menú...";
      system("Pause>nul");
      break;
    case 5: {
      // MODO TORNEO: 8 JUGADORES ENFRENTADOS ALEATOREAMENTE EN ELMINATORIAS
      // PUEDEN SER HUMANOS O PC

      cout << "¡TORNEO!" << endl;
      cout << "El modo torneo enfrenta a 8 jugadores en eliminatorias" << endl
           << "para ver quién es el que hoy se saca el quini." << endl
           << endl;

      // Declara y pide los nombres
      string jugadores[8]{};
      for (int j = 0; j < 8; j++) {
        jugadores[j] = pedirNombre("Jugador " + (j + 1));
      }

      int resultadosJugadores[8][3]{};

      // DECICIR EL ORDEN

      // ITERAR LAS INSTANCIAS (3: CUARTOS-SEMI-FINAL)

      // MOSTRAR LA LLAVE

      // ITERAR LOS RESTANTES (AL PRINCIPIO 8)
      //   MOSTRAR LOS DOS POR JUGAR
      //   LLAMAR A PARTIDADOSJUGADORES
      //   ALMACENAR EL GANADOR EN SU LLAVE

      // ANUNCIAR EL GANADOR
      // CAPAZ SE PUEDEN MOSTRAR ESTADISTICAS ONDA: PREMIO AL QUE MAS PUNTOS
      // HIZO EN UNA PARTIDA, PREMIO AL QUE MENOS, EL QUE MAS ABANDONO, EL QUE
      // MENOS (MAS JUGADOR).

      break;
    }
    case 0:
      cout << "¡¡¡Gracias por jugar GREED!!!" << endl;
      cout << endl;
      break;
  }
}

void mostrarEstadistica(int rankingPuntos[6], string rankingNombres[6]) {
  cout << "El puntaje mas alto es: " << rankingPuntos[0] << endl
       << "Jugador: " << rankingNombres[0] << endl;
  cout << "---------------------------------------" << endl << endl;
  cout << "RANKING" << endl << endl;
  for (int i = 0; i < 5; i++) {
    cout << rankingNombres[i] << " : " << rankingPuntos[i] << " puntos" << endl;
  }
}

void mostrarCreditos() {
  cout << endl;
  cout << "         EQUIPO 05 " << endl << endl;
  cout << "Integrantes:" << endl << endl;
  cout << "ALVAREZ, Florencia Lujan - Legajo N° 30000" << endl << endl;
  cout << "MIÑO, Mauricio Adan - Legajo N° 30000" << endl << endl;
  cout << "LIMA, Marcos Jesus - Legajo N° 30000" << endl << endl;
  cout << "VERA, Rodolfo Anibal - Legajo N° 32078" << endl;
}

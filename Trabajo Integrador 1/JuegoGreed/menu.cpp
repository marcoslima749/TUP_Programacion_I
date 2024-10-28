#include <iostream>
#include "menu.h"
#include "juego.h"

using namespace std;


int opcionesDelJuego(){
    int opcion;
    cout << "         GREED      " << endl;
    cout << "-----------------------" << endl;
    cout << "1 - MODO UN JUGADOR" << endl;
    cout << "2 - MODO DOS JUGADORES" << endl;
    cout << "3 - ESTADÍSTICAS" << endl;
    cout << "4 - CRÉDITOS" << endl;
    cout << "-----------------------" << endl;
    cout << "0- SALIR" << endl;
    cout << "-----------------------" << endl<<endl;

    cout << "Seleccione Una Opción: ";
    cin >> opcion;

    cout << endl;
    system("cls");

  return opcion;

}
void ejecutarOpciones(int opcion, int &puntajeGanador, string &nombreGanador){
    switch (opcion){
    case 1:
        //funciones para un jugador
        jugar(puntajeGanador, nombreGanador);

        break;
    case 2:
        //funciones para dos jugadores

        break;
    case 3:
        //funciones para estadisticas
        estadisticaGanador( puntajeGanador, nombreGanador);

        break;
    case 4:
        mostrarCreditos();
        break;
    case 0:
        cout << "¡¡¡Gracias por jugar GREED!!!" << endl;
        break;
    }
}

void estadisticaGanador(int puntajeGanador, string nombreGanador){
    if (puntajeGanador>0){
      cout << "El puntaje mas alto es: " << puntajeGanador << " Jugador: " << nombreGanador << endl;
    }else {cout << "No hay datos para mostrar..."<<endl;}

}

void mostrarCreditos(){
    cout << endl;
    cout << "         EQUIPO 05 " << endl<<endl;
    cout << "Integrantes:" << endl<<endl;
    cout << "ALVAREZ, Florencia Lujan - Legajo N° 30000" << endl << endl;
    cout << "MIÑO, Mauricio Adan - Legajo N° 30000" << endl << endl;
    cout << "LIMA, Marcos Jesus - Legajo N° 30000" << endl << endl;
    cout << "VERA, Rodolfo Anibal - Legajo N° 32078" << endl;
    }

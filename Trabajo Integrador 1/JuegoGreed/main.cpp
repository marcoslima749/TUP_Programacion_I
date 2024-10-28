#include <iostream>
#include <ctime>
#include "menu.h"
#include "juego.h"




using namespace std;

int main(){

  int opcion;
  int puntajeGanador=0;
  string nombreGanador;


  srand(time(0));

  do{
        system("cls");
        opcion=opcionesDelJuego();
        ejecutarOpciones(opcion, puntajeGanador, nombreGanador);




        cout << endl << "Presione cualquier tecla para continuar...";
        system("pause>nul");
    }
    while (opcion != 0);
    return 0;
}

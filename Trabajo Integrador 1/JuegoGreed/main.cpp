#include <ctime>
#include <iostream>
#include <vector>

#include "juego.h"
#include "menu.h"

using namespace std;

int main() {
  int opcion;
  int puntajeGanador = 0;
  string nombreGanador;
  int rankingPuntos[6]{7,5,3,2,1,0};
  string rankingNombres[6]{"Sonic","Mario","Kirby","IceClimber","JohnWick",""};


  srand(time(0));

  do {
    system("cls");
    opcion = opcionesDelJuego();
    ejecutarOpciones(opcion, puntajeGanador, nombreGanador, rankingPuntos, rankingNombres);

  } while (opcion != 0);

  return 0;
}

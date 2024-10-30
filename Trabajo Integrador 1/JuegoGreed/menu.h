#pragma once
#include <string>
#include <ctime>
#include <iostream>
#include <vector>

int opcionesDelJuego();
void ejecutarOpciones(int opcion, int &puntajeGanador, std:: string &nombreGanador, int rankingPuntos[6], std:: string rankingNombres[6]);
void mostrarEstadistica(int rankingPuntos[6], std::string rankingNombres[6]);
void mostrarCreditos();

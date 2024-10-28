#pragma once
#include <string>

int opcionesDelJuego();
void ejecutarOpciones(int opcion, int &puntajeGanador, std:: string &nombreGanador);
void mostrarEstadistica(int puntajeGanador, std::string nombreGanador);
void mostrarCreditos();

#pragma once
#include <string>
#include <ctime>
#include <iostream>
#include <vector>

int tirarUnDado();
void tirarNDados(int vDados[], int cantidad);
void mostrarDados(int vDados[], int cantidad);
int calcularPuntaje(int vDados[], int dadosBloqueadores[], int &cantidad);
void jugar(std::string jugadores[], int resultado[][3], int cantJugadores);
void partidaUnJugador(std::string jugador, int resultado[3]);
void partidaDosJugadores(std::string jugador1, std::string jugador2, int resultado1[3],int resultado2[3]);
void jugarUnaRonda(std::string nombre, int resultado[3], int numeroDeRonda);

std::string pedirNombre(std::string jugador);

void mostrarPuntajeDeRonda(int vec[],int cantidad);
int obtenerPuntajeTotal(int puntajeRondas[]);
void finDelaPartida(int dadosPuntajes[],int cantidadDeRondas, int cantidadDeDados);
bool sonTodosIguales(int vec[],int tam);

void ingresarEstadistica(int puntaje, std::string nombre, int rankingPuntos[6], std::string rankingNombres[6]);
void ordenarRanking(int rankingPuntos[6], std::string rankingNombres[6], int largoRanking);
void determinarGanadorDosJugadores (int puntaje1, std::string nombre1,int puntaje2, std::string nombre2);
void determinarGanadorUnJugador (int puntaje, std::string nombre, int rankingPuntos[6]);
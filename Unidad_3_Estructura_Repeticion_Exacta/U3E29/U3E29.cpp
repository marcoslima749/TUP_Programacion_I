/*
Se dispone de la información de los últimos 19 partidos del futbolista Diego Armando Laradona.
Por cada partido se registró:

Número de partido
Minutos jugados
Tarjetas amarillas
Tarjetas rojas
Goles

Existe un registro para cada partido. Los mismos se encuentran ordenados por número de partido.
Se pide calcular e informar:

La cantidad de partidos que no jugó (partidos con minutos igual a cero)
La cantidad de partidos que jugó por completo (minutos >= 90)
El promedio de tarjetas recibidas por partido.
El número de partido en el que haya convertido mayor cantidad de goles.
Indicar también los goles convertidos.
La mejor racha de partidos convirtiendo goles.
Se debe mostrar la mayor cantidad de partidos consecutivos en los que haya convertido.

*/

#include <iostream>
using namespace std;
int main(){
  int minutos, amarillas, rojas, goles;
  int partidosCompletos = 0, noJugo = 0, maximoGoles = 0, partidoMaximo = 1;
  int rachaPartidosGol = 0, maximaRacha = 0, totalTarjetas = 0;
  float promedioTarjetas = 0.0f;
  cout << "Ingrese Minutos jugados, Tarjetas amarillas, Tarjetas rojas, Goles (enteros):" << endl;
  for(int i = 1; i <= 19; i++){

    cin >> minutos >> amarillas >> rojas >> goles;

    if(minutos >= 90) {
        partidosCompletos++;
    } else if(minutos = 0) {
        noJugo++;
    }

    if(goles > 0) {
        rachaPartidosGol++;

        if(rachaPartidosGol > maximaRacha) {
            maximaRacha = rachaPartidosGol;
        }

        if(goles > maximoGoles) {
            maximoGoles = goles;
            partidoMaximo = i;
        }

        } else {
            rachaPartidosGol = 0;
        }

        totalTarjetas += amarillas + rojas;
        promedioTarjetas = totalTarjetas / 19.0f;

        
    cout << "Estuvo ausente en: " << noJugo << " partidos." << endl;
    cout << "Jugó " << partidosCompletos << " partidos completos." << endl;
    cout << "El promedio de tarjetas por partido es de " << promedioTarjetas << " tarjetas por partido." << endl;
    cout << "El partido en el que convirtió más goles fue el N° " << partidoMaximo << " donde convirtió " << maximoGoles << " goles." << endl;
    cout << "La mejor racha convirtiendo es de " << maximaRacha << " partidos.";

  }
  return 0;
}
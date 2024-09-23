/*
El festival Larapalooza, el mejor festival musical del mundo,
brindará una serie de conciertos distribuidos en tres jornadas distintas.
Se desea un programa que registre los artistas que participarán. Por cada artista se registró:

Número de artista (entero)
Integrantes (entero)
Jornada (1, 2 o 3)
Duración del show en minutos (entero)

La información no se encuentra ordenada bajo ningún criterio.
La carga de datos se finaliza con un número de artista igual a cero. Calcular e informar:
El número de artista que realice el show más largo de la jornada 1.
La cantidad de solistas (artistas de 1 integrante) que participaron en cada una de las jornadas.
(se muestran tres resultados).
La jornada más extensa (en minutos totales).
Duración promedio de show por artista (se muestra un resultado).

*/

#include <iostream>
using namespace std;
int main(){
    int artista, integrantes, jornada, duracion, maxDuracion = -1, artistaMax;
    int solistas1 = 0, solistas2 = 0, solistas3 = 0;
    int duracion1 = 0, duracion2 = 0, duracion3 = 0, jornadaMax = -1;
    int promedioDuracionShows, totalArtistas = 0;

    cin >> artista >> integrantes >> jornada >> duracion;

    while (artista != 0){
        if(jornada == 1) {
            if(maxDuracion == -1 || duracion > maxDuracion) {
                maxDuracion = duracion;
                artistaMax = artista;
            }
            if(integrantes == 1){
                solistas1++;
            }
            duracion1+= duracion;
            if(jornadaMax == -1 || duracion1 > jornadaMax) {
                jornadaMax = duracion1;
            }
        } else if(jornada == 2) {
             if(integrantes == 1){
                solistas2++;
            }
            duracion2+= duracion;
            if(jornadaMax == -1 || duracion2 > jornadaMax) {
                jornadaMax = duracion2;
            }
        } else if (jornada == 3) {
             if(integrantes == 1){
                solistas3++;
            }
            duracion3+= duracion;
            if(jornadaMax == -1 || duracion3 > jornadaMax) {
                jornadaMax = duracion3;
            }
        }
        
        totalArtistas++;
        cin >> artista >> integrantes >> jornada >> duracion;
    }

    promedioDuracionShows = (duracion1 + duracion2 + duracion3) / totalArtistas;
    
    cout << "El artista que realizó el show más largo en la jornada 1: " << artistaMax << ". El show duró " << maxDuracion << " minutos." << endl;
    cout << "En la jornada 1 participaron " << solistas1 << " solistas, en la 2 " << solistas2 <<" solistas y en la 3 " << solistas3 << " solistas." << endl;
    cout << "La jornada más extensa fue duró: " << jornadaMax << " minutos." << endl;
    cout << "El promedio de show por artista fue de: " << promedioDuracionShows << endl; 
    return 0;
}
/*
Una estación meteorológica registró una muestra climática de los últimos 15 días.
Por cada día registró:
Número de día (entero)
Temperatura (float)
Milímetros de lluvia (float)
Visibilidad en km (float)

Hay un registro por cada día.
La información se encuentra ordenada por día.
Se pide calcular e informar:
El número del día que se haya registrado la temperatura máxima.
La amplitud térmica de todo el período.
La cantidad de días con neblina.
Mostrar "Quincena lluviosa" si hubo más días de lluvia que días sin lluvia.
Mostrar "Quincena húmeda" si llovió en al menos un tercio de los días.
De lo contrario mostrar "Quincena seca".

NOTA: La amplitud térmica es la diferencia entre la temperatura máxima y la temperatura mínima.
NOTA: Se considera neblina a una visibilidad menor a 2 km.

*/

#include <iostream>
using namespace std;
int main(){
  int diaMaxima = 1, diasNeblina = 0, diasConLluvia = 0;
  float temperatura, maxima, minima, lluvia, visibilidad, amplitudTermica = 0, porcentajeLluvia;
  
  cout << "Ingrese la temperatura, la lluvia en mm, y la visibilidad en km de los últimos 15 días:" << endl;
  for(int dia = 1; dia <= 15; dia++) {
    cout << "Dia " << dia << ":" << endl;
    cin >> temperatura >> lluvia >> visibilidad;
    if(dia == 1) {
        minima = temperatura;
        maxima = temperatura;
    } else {
        if(temperatura < minima) {
            minima = temperatura;
        }
        if(temperatura > maxima){
            maxima = temperatura;
            diaMaxima = dia;
        }
        amplitudTermica = maxima - minima;
        if(lluvia > 0) {
            diasConLluvia++;
        }
        if(visibilidad < 2) {
            diasNeblina++;
        }

    }

  }

  cout << "El día " << diaMaxima << " se alcanzó la temperatura máxima." << endl;
  cout << "La amplitud térmica del período fue de " << amplitudTermica << " grados." << endl;
  cout << "Hubo " << diasNeblina << " días con neblina." << endl;

  porcentajeLluvia = diasConLluvia / 15.0f;

  if(porcentajeLluvia > 0.5f) {
    cout << "Quincena Lluviosa." << endl;
  } else if ( porcentajeLluvia >= 0.3f){
    cout << "Quincena Húmeda." << endl;
  } else {
    cout << "Quincena Seca." << endl;
  }

  return 0;
}
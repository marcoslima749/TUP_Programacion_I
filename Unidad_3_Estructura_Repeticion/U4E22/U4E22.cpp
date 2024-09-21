/*
Hacer un programa que permita ingresar una lista de números positivos, negativos o cero
hasta que se ingrese el 5º número par.
Calcular e informar:
La cantidad de ternas de números negativos ingresados de manera consecutiva.

Ejemplo A: 4, -1, -4, -5, 10, -3, -5, 7, -5, -3, -6, 10 → Cantidad de ternas: 2

*/
#include <iostream>
using namespace std;
int main(){
  int numero, cantPares = 0, ternas = 0, racha = 0;
  cout << endl << endl << "Ingrese una lista de números:" << endl;
   

  do
  {
    cin >> numero;
    if(numero % 2 == 0) {
        cantPares++;
    }
    if(numero < 0) {
        racha++;
    } else {
        racha = 0;
    }
    if(racha == 3){
        ternas++;
        racha = 0;
    }
  } while (cantPares < 5);
  
    cout << "Cantidad de ternas: " << ternas;
  return 0;
}
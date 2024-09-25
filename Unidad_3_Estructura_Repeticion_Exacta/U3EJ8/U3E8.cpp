/*
Hacer un programa para ingresar una lista de 10 números,
luego informar el porcentaje de positivos, negativos, y  ceros.
*/

#include <iostream>
using namespace std;
int main(){
  float positivos = 0, negativos = 0, ceros = 0, total = 0;
  cout << "Ingrese 10 números para conocer la cantidad de negativos, ceros, y positivos: " << endl;

  for(int i = 0; i < 10; i++) {
    int numero;
    cin >> numero;
    total++;
    if(numero > 0) {
        positivos++;
    } else if(numero < 0) {
        negativos++;
    } else {
        ceros++;
    }
  }

  cout << "Negativos: " << negativos / total * 100.0f << "%" << endl << "Positivos: " << positivos / total * 100.0f << "%" << endl << "Ceros: " << ceros / total * 100.0f;
  return 0;
}
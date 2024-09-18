/*
Hacer un programa para ingresar una lista de 10 números,
luego informar cuántos son positivos, cuántos son negativos, y cuántos iguales a cero.
Para resolver este ejercicio sugerimos resolver antes el TP2 EJ 11.
*/

#include <iostream>
using namespace std;
int main(){
  int positivos = 0, negativos = 0, ceros = 0;
  cout << "Ingrese 10 números para conocer la cantidad de negativos, ceros, y positivos: " << endl;

  for(int i = 0; i < 10; i++) {
    int numero;
    cin >> numero;
    if(numero > 0) {
        positivos++;
    } else if(numero < 0) {
        negativos++;
    } else {
        ceros++;
    }
  }

  cout << "Negativos: " << negativos << endl << "Positivos: " << positivos << endl << "Ceros: " << ceros;
  return 0;
}
/*
Hacer un programa para ingresar por teclado un número
y luego informar por pantalla con un cartel aclaratorio si el mismo es par o impar.
*/

#include <iostream>
using namespace std;
int main(){
    int numero;
  cout << "Ingrese un número entero para saber si es par o impar:" << endl;
  cin >> numero;
  if(numero % 2 == 0) {
    cout << "El número es par.";
  } else {
    cout << "El número es impar.";
  }
  return 0;
}
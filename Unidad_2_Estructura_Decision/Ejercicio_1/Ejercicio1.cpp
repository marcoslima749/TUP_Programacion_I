/*
Hacer un programa para ingresar por teclado un número
y luego emitir por pantalla un cartel aclaratorio
indicando si el mismo es positivo, negativo o cero.
Importante: Verifique que el programa emita UN SOLO CARTEL.
*/

#include <iostream>
using namespace std;
int main(){
  float numero;
  cout << "Ingrese un número:" << endl;
  cin >> numero;
  if(numero > 0) {
    cout << "El número es positivo.";
  } else if(numero < 0) {
    cout << "El número es negativo.";
  } else {
    cout << "El número es cero.";
  }
  return 0;
}
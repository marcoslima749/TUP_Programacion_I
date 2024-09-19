/*
Hacer un programa para ingresar 10 números,
luego informar los 2 mayores valores ingresados,
aclarando cual es el máximo y cuál es el segundo máximo
descartando los números repetidos.

Ejemplo A: 10, 8,12, 78 ,55, 20, 12, 40, 31, 28 el resultado será 78 y 55.
Ejemplo B: -20, -25, -3, -8, -50, -45, -20, -22, -15, -11 el resultado será -3 y -8.
Ejemplo C: 20, 20, 12, 9, 14, 14, 8, 8, 10, 3 el resultado será 20 y 14.

En el ejemplo C el valor 20 aparece dos veces, pero sólo se considera una vez.

*/

#include <iostream>
using namespace std;
int main(){
int numero, primerMaximo, segundoMaximo, cantMaximos = 0;
  cout << "Ingrese 10 números: " << endl;

  for(int i = 0; i < 10; i++) {
    cin >> numero;
    if(cantMaximos == 0) {
        primerMaximo = numero;
        cantMaximos++;
    } else if(cantMaximos == 1) {
        if(numero > primerMaximo) {
            segundoMaximo = primerMaximo;
            primerMaximo = numero;
            cantMaximos++;
        } else if(numero < primerMaximo) {
            segundoMaximo = numero;
            cantMaximos++;
        }
    } else {
        if(numero > primerMaximo) {
            segundoMaximo = primerMaximo;
            primerMaximo = numero;
        } else if(numero > segundoMaximo && numero < primerMaximo){
            segundoMaximo = numero;
        }
    }
    
  }

  cout << "Primer máximo: " << primerMaximo << endl << "Segundo máximo: " << segundoMaximo;

  return 0;
}
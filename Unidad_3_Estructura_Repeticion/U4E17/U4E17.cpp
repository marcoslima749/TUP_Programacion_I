/*
Hacer un programa para ingresar una lista de números
que finaliza cuando se ingresan dos números positivos consecutivos,y luego informar el máximo.
Cuando se ingresa el segundo número positivo consecutivo el mismo debe ser descartado. 

Ejemplo A: 5, -10, 20, -8, 0, 13, -35, -8, 15, 10. Se listará Máximo 20. 
En este caso, el segundo número positivo consecutivo, el 10, no se analiza, sólo sirve para finalizar el ingreso. 
Ejemplo B: 5, -10, 20, -20, 0, 55, -13, 45, -8, -5, 12, 120. Se listará Máximo 55. 
En este caso, el segundo número positivo consecutivo, el 120, no se analiza, sólo sirve para finalizar el ingreso.

*/

#include <iostream>
using namespace std;
int main(){
  int numero, maximo, anterior;
  cout << endl << endl << "Ingrese un número:" << endl;
  cin >> numero;
  maximo = numero;
  anterior = numero * -1;
  while (numero <= 0 || anterior <= 0){
    if(numero > maximo) {
        maximo = numero;
    }
    anterior = numero;
    cin >> numero;
  }

  cout << "Maximo: " << maximo << endl;

  return 0;
}
/*
Hacer un programa para ingresar una lista de 10 números, luego informar el máximo y el mínimo.
Ejemplo A: 10, 20, -5, 30,-15, 5, 42, 0, 22, -13. Se listará Máximo 42 Mínimo -15.
Ejemplo B: 10, 20, 5, 30, 15, 5, 42, 8, 22, 13. Se listará Máximo 42 Mínimo 5.
Ejemplo C: -10, -20, -5, -30, -15, -12, -42, -8, -22, -13. Se listará Máximo -5 Mínimo -42.
Observe que los tres ejemplos dejan en claro que la suposición de que el máximo “seguramente” es un positivo y el mínimo “seguramente” es un negativo, queda totalmente descartada.

*/

#include <iostream>
using namespace std;
int main(){
  float numero, maximo, minimo;
  cout << "Ingrese 10 números para conocer el máximo y el mínimo:" << endl;
  for(int i = 1; i <= 10; i++) {
    cin >> numero;
    if(i == 1) {
        maximo = numero;
        minimo = numero;
    } else{
        if (numero > maximo){
            maximo = numero;
        }   
        if (numero < minimo){
            minimo = numero;
        }   
    } 

  }
  cout << "Máximo " << maximo << " Mínimo " << minimo << endl;
  return 0;
}
/*
Hacer un programa para ingresar una lista de 8 números
y luego informar si todos están ordenados en forma creciente.
En caso de haber dos números “empatados” considerarlos como crecientes. 
Por ejemplo si la lista fuera: 
Ejemplo A: -10, 1, 5, 7, 15, 18, 20, 23
se emitirá un cartel: “Conjunto Ordenado”
Ejemplo B: 10, 10, 15, 20, 25, 25, 28, 33
se emitirá un cartel: “Conjunto Ordenado”
Ejemplo C: 10, 1, 15, 7, -15, 18, 20, 23
se emitirá un cartel: “Conjunto No Ordenado”
Para resolver este ejercicio sugerimos resolver antes el TP2 EJ 17.
*/

#include <iostream>
using namespace std;
int main(){
  float actual, anterior;
  bool ordenado = true;
  cout << "Ingrese 8 números para saber si están ordenados: " << endl;
  for (int i = 0; i < 8; i++){
    cin >> actual;
    if(i == 0) {
        anterior = actual;
    } else if(actual < anterior) {
        ordenado = false;
    }
  }

  if(ordenado){
    cout << "Conjunto Ordenado.";
  } else {
    cout << "Conjunto No Ordenado.";
  }
  
  return 0;
}
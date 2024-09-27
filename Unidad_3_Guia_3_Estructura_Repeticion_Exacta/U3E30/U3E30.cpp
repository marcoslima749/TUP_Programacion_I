/*
Dada una lista de 7 números enteros todos distintos entre sí
determinar e informar con un cartel aclaratorio
si los números primos ingresados en la misma
están ordenados de menor a mayor.

Los números primos pueden no ser consecutivos, pero sí estar ordenados.

Ejemplo A: 4, 5, 7, 12, 13, 19, 20.
Se emite un cartel que diga “Ordenados”
ya que los números primos están ordenados:
5, 7, 13, 19.

Ejemplo B: 4, 10, 3, 5, 11, 7, 14.
Se emite un cartel que diga
“Desordenados” ya que los números primos no están ordenados:
3, 5, 11, 7.

*/

#include <iostream>
using namespace std;
int main(){
  int numero, divisores = 0, primoAnterior = 0, primoActual = 0;
  bool ordenados = true;
  cout << "Ingrese 7 números enteros para conocer si los primos están ordenados: " << endl;

  for (int i = 0; i < 7; i++){
    cin >> numero;
    for(int j = 1; j <= numero; j++){
        if(numero % j == 0) {
            divisores++;
        }
    }
    if(divisores > 2) {
        primoActual = numero;
        if(primoActual < primoAnterior) {
            ordenados = false;
        }
        primoAnterior = primoActual;
    }
  }

  if(ordenados){
    cout << "Los primos están ordenados." << endl;
  } else {
    cout << "Los primos NO están ordenados." << endl;
  }
  
  return 0;
}
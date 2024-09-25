/*
Se define a un número entero como primo cuando tiene solamente dos divisores.
Ejemplo A: 2, 7, 11, 13 son números primos, ya que todos tienen solamente dos divisores. 
Ejemplo B: 6 no es primo, pues tiene 4 divisores (1, 2, 3 y 6) 
Ejemplo C: 9 no es primo, pues tiene 3 divisores (1, 3 y 9) 

Hacer un programa para ingresar un número
y luego informar con un cartel aclaratorio si el mismo es un número primo o es número no primo.
*/

#include <iostream>
using namespace std;
int main(){
  int numero, divisores = 0;
  cout << "Ingrese un número para saber si es primo: " << endl;
  cin >> numero;
  cout << endl;
  for (int i = 1; i <= numero; i++){
    if( numero % i == 0) {
        divisores++;
    }
  }
  
  if(divisores > 2) {
    cout << "El número " << numero << " no es primo.";
  } else {
    cout << "El número " << numero << " es primo.";
  }
  return 0;
}
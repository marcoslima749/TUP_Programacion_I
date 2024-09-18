/*
Hacer un programa para ingresar un número entero
y luego informar la cantidad de divisores de ese número. 
Ejemplo A. Si se ingresa 6 se listará: 4 divisores. 
Ejemplo B. Si se ingresa 9 se listará: 3 divisores. 
*/

#include <iostream>
using namespace std;
int main(){
  int numero, divisores = 0;
  cout << "Ingrese un número para conocer la cantidad de divisores que tiene: " << endl;
  cin >> numero;
  cout << endl;
  for (int i = 1; i <= numero; i++){
    if( numero % i == 0) {
        divisores++;
    }
  }
  cout << divisores << " divisores.";
  return 0;
}
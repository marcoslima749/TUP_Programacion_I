/*
Hacer un programa para ingresar un número entero
y luego informar todos los divisores pares de ese número. 
Ejemplo A. Si se ingresa 6 se listará: 2 y 6.
Ejemplo B. Si se ingresa 8 se listará: 2, 4 y 8.
Ejemplo C. Si se ingresa 11 no se listará nada.
*/

#include <iostream>
using namespace std;
int main(){
  int numero;
  cout << "Ingrese un número para conocer sus divisores PARES: " << endl;
  cin >> numero;
  cout << endl;
  for (int i = 1; i <= numero; i++){
    if( numero % i == 0 && i % 2 == 0) {
        cout << i << endl;
    }
  }
  
  return 0;
}
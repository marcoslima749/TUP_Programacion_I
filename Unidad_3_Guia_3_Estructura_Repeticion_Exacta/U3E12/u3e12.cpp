/*
Hacer un programa para ingresar una lista de 10 números
e informar el máximo de los negativos y el mínimo de los positivos. 
Ejemplo: 5, 8, 12, 2, -10, 15, -20, 8, -3, 24. Máximo Negativo -3. Mínimo Positivo 2.
*/

#include <iostream>
using namespace std;
int main(){
  float numero, maximoNegativo, minimoPositivo;
  bool primerNegativo = true, primerPositivo = true;
  cout << "Ingrese 10 números para conocer el máximo de los negativos y el mínimo de los positivos:" << endl;
  for(int i = 0; i < 10; i++) {
    cin >> numero;
    if(primerNegativo && numero < 0) {
        maximoNegativo = numero;
        primerNegativo = false;
    }
    if(primerPositivo && numero > 0){
        minimoPositivo = numero;
        primerPositivo = false;
    }

    if(numero < 0 && numero > maximoNegativo) {
        maximoNegativo = numero;
    } else if(numero > 0 && numero < minimoPositivo) {
        minimoPositivo = numero;
    }
  }
  cout << "Máximo Negativo: " << maximoNegativo << endl << "Mínimo Positivo: " << minimoPositivo << endl;
  return 0;
}
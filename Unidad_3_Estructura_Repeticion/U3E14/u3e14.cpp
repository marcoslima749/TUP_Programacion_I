/*
Dada una lista de 7 números enteros
informar cual es el primer, el segundo, el anteúltimo y el último número impar ingresado.
Ejemplo 8, 4, -5, 7, 9, 18, 5 se informa: Primer impar: -5, Segundo impar: 7, Anteúltimo impar: 9 y Último impar: 5.
*/

#include <iostream>
using namespace std;
int main(){
  int numero, orden = 0, primero, segundo, anteultimo, ultimo;
  cout << "Ingrese 7 números enteros para conocer el primero, segundo, anteúltimo y último de los impares: " << endl;
  for(int i = 0; i < 7; i++){
    cin >> numero;
    if(numero % 2 != 0) {
        if(orden == 0) {
            primero = numero;
            orden++;
        } else if(orden == 1) {
            segundo = numero;
            orden++;
        }
        anteultimo = ultimo;
        ultimo = numero;
    }
  }

    cout << "Primer impar: " << primero << endl << "Segundo impar: " << segundo << endl << "Anteúltimo impar: " << anteultimo << endl << "Último impar: " << ultimo << endl;
  return 0;
}
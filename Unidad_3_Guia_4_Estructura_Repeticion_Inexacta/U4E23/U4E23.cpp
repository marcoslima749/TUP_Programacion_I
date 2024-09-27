/*
Dada una lista de números que finaliza cuando se ingresa un número divisible por 7,
informar cual es el anteúltimo y último número impar ingresado.
Ejemplo 8, 4, -5, 6, 10, 5, 18, 14 se informa -5 y 5.

Nota: Contemplar la posibilidad que podría no haber números impares en la lista.
*/

#include <iostream>
using namespace std;
int main(){
  int numero, ultimoImpar = 0, anteUltimoImpar = 0;
  cout << "Ingrese una lista de números. Termina cuando se ingresa un 7: " << endl;
    cin >> numero;
  while (numero % 7 != 0){
    if(numero % 2 != 0) {
        if(ultimoImpar == 0) {
            ultimoImpar = numero;
        } else {
            anteUltimoImpar = ultimoImpar;
            ultimoImpar = numero;
        }
    }
    cin >> numero;
  }

  

  if(ultimoImpar == 0) {
    cout << "No se ingresaron números impares.";
  } else if(anteUltimoImpar == 0) {
    cout << "Se ingresó un sólo número impar: " << ultimoImpar;
  } else {
    cout << "Anteúltimo impar: " << anteUltimoImpar;
    cout << "Último impar: " << ultimoImpar << endl;
    
  }

  return 0;
}
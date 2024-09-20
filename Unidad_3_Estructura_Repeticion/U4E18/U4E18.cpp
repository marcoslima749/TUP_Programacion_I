/*
Se define a un número como primo cuando tiene solamente dos divisores.
Ejemplo 1: 2, 7, 11, 13 son números primos, ya que todos tienen solamente dos divisores. 

Ejemplo 2: 6 no es primo, pues tiene 4 divisores (1, 2 3 y 6) 
Ejemplo 3: 9 no es primo, pues tiene 3 divisores (1, 3 y 9)

Hacer un programa para ingresar un número
y luego informar con un cartel aclaratorio si el mismo es un número primo o es no es un número primo.
Debe usar un ciclo inexacto para resolver este ejercicio.
*/

#include <iostream>
using namespace std;
int main(){
  bool primo = true;
  int numero, divisor = 2;
  cout << endl << endl << "Ingrese un número para saber si es primo: " << endl;
  cin >> numero;

  while(divisor < numero && primo){

    if(numero % divisor == 0){
      primo = false;
    }

    divisor++;
  }

  if(primo){
    cout << "El número es primo.";
  } else {
    cout << "El número no es primo;";
  }

cout << endl << endl;
system("pause");
  return 0;
}
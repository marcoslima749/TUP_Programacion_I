/*Hacer un programa para ingresar por teclado dos números
y luego informar por pantalla con un cartel aclaratorio si el primer número es múltiplo del segundo. 
*/

#include <iostream>
using namespace std;
int main(){
    int primerNumero, segundoNumero;

	cout << "Ingrese el primer número:" << endl;
	cin >> primerNumero;
	cout << "Ingrese el segundo número:" << endl;
	cin >> segundoNumero;
    if(primerNumero % segundoNumero == 0) {
		cout << "El primer número es múltiplo del segundo.";
    } else {
		cout << "El primer número NO es múltiplo del segundo.";
    }

  return 0;
}
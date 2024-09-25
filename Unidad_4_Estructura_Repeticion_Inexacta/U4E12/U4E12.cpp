/*
Dada una lista de números que finaliza cuando se ingresa un cero,
informar cual es el primer y segundo número impar ingresado.

Ejemplo 8, 4, 5, 6, -9, 5, 7, 0 se informa 5 y -9

*/

#include <iostream>
using namespace std;

int main(){
    int numero, primerImpar, segundoImpar, impares = 0;
    cout << endl << endl << "Ingrese una lista de números terminada en 0: " << endl;
    cin >> numero;

    while(numero != 0) {
        if(numero % 2 != 0) {
            if(impares == 0) {
                primerImpar = numero;
            } else if (impares == 1) {
                segundoImpar = numero;
            }
            impares++;
        }
        cin >> numero;
    }

    cout << "Primer impar: " << primerImpar << endl << "Segundo impar: " << segundoImpar;
    return 0;
}
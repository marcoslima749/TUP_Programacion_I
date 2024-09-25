/*
Dada una lista de números que finaliza cuando se ingresa un cero,
informar cual es el primer y último número impar ingresado.
Ejemplo 8, 4, -5, 6, 9, 5, 18, 0 se informa -5 y 5.
*/

#include <iostream>
using namespace std;

int main(){
    int numero, primerImpar, ultimoImpar;
    bool primero = true;
    cout << endl << endl << "Ingresar una lista de numeros finalizada en 0:" << endl;

    cin >> numero;
    while(numero != 0) {
        if(numero % 2 != 0) {
            if(primero) {
                primerImpar = numero;
                primero = false;
            }
            ultimoImpar = numero;
        }
        cin >> numero;
    }

    cout << "Primer impar: " << primerImpar << endl << "Ultimo impar: " << ultimoImpar;
    return 0;
}

/*
Hacer un programa para ingresar una lista de números que finaliza cuando se ingresa un cero,
informar el máximo de los negativos y el mínimo de los positivos. 

Ejemplo: 5, 8, 12, 2, -10, 15, -20, 8, -3, 24, 0. 
Máximo Negativo: -3. 
Mínimo Positivo: 2.

*/
#include <iostream>
using namespace std;

int main(){
    int minimoPositivos, maximoNegativos, numero, primerPositivo = true, primerNegativo = true;

    cout << endl << endl << "Ingrese una lista de números finalizada en 0: " << endl;

    cin >> numero;

    while (numero != 0){
        if(numero > 0) {
            if(primerPositivo || numero < minimoPositivos) {
                minimoPositivos = numero;
                primerPositivo = false;
            }
        } else {
            if(primerNegativo || numero > maximoNegativos) {
                maximoNegativos = numero;
                primerNegativo = false;
            }
        }
        cin >> numero;
    }

    cout << "Máximo Negativo: " << maximoNegativos << endl << "Mínimo Positivo: " << minimoPositivos << endl;
    

    return 0;
}
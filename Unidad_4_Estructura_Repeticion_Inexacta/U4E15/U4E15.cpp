/*
Hacer un programa para ingresar una lista de números que finaliza cuando se ingresa un cero,
informar los 2 mayores valores ingresados, aclarando cual es el máximo y cuál el que le sigue.

Ejemplo: 10, 8, 12, 14, 3, 0 el resultado será 14 y 12. 
Ejemplo: 14, 8, 12, 14, 3, 0 el resultado será 14 y 14. 
Ejemplo: -4, -8, -12, -20, -2, 0 el resultado será -2 y -4 

*/

#include <iostream>
using namespace std;

int main(){
    int numero, primerMaximo, segundoMaximo, maximos = 0;
    cout << endl << endl << "Ingrese una lista de números finalizada en 0" << endl;
    cin >> numero;

    while (numero != 0){
        if(maximos == 0) {
            primerMaximo = numero;
            maximos++;
        } else if(maximos == 1) {
            if(numero > primerMaximo) {
                segundoMaximo = primerMaximo;
                primerMaximo = numero;
            } else {
                segundoMaximo = numero;
            }
            maximos++;
        } else {
            if(numero > primerMaximo) {
                segundoMaximo = primerMaximo;
                primerMaximo = numero;
            } else if(numero > segundoMaximo) {
                segundoMaximo = numero;
            }
        }

        cin >> numero;
    }

    cout << "Primer máximo: " << primerMaximo << endl << "Segundo máximo: " << segundoMaximo;
    
    return 0;
}
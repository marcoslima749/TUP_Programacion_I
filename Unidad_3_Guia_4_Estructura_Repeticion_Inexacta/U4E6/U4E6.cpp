/*
Hacer un programa para ingresar una lista de números que finaliza cuando se ingresa un cero,
luego informar cuántos son positivos y cuántos son negativos.
Ejemplo: 4, -3, 8, -5, 18, 20, 0. Se listará Positivos: 4 Negativos: 2.
Para resolver este ejercicio sugerimos resolver antes el TP3 EJ 7.
*/

#include <iostream>
using namespace std;

int main(){
    int numero, positivos = 0, negativos = 0;
    cout << "Ingrese un número: " << endl;
    do {
        cin >> numero;
        if(numero > 0) {
            positivos++;
        } else if(numero < 0) {
            negativos++;
        }
    } while (numero != 0);
    
    cout << "Positivos: " << positivos << endl << "Negativos: " << negativos << endl;

    return 0;
}

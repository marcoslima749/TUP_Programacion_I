/*
Hacer un programa para ingresar una lista de números que finaliza cuando se ingresa un cero,
informar si todos están ordenados en forma creciente.
En caso de haber dos números “empatados” considerarlos como crecientes. 
Por ejemplo si la lista fuera: 
Ejemplo 1: -10, 1, 5, 7, 15, 18, 20, 23, 0 se emitirá un cartel: “Conjunto Ordenado” Ejemplo 2: 10, 10, 15, 20, 25, 25, 28, 33, 0 se emitirá un cartel: “Conjunto Ordenado” 
Ejemplo 3: 10, 1, 15, 7, -15, 18, 20, 23, 0 se emitirá un cartel: “Conjunto No Ordenado”

*/

#include <iostream>
using namespace std;

int main(){
    int numero, anterior;
    float ordenado = true;
    cout << endl << endl << "Ingrese una lista de numeros terminada en 0: " << endl;
    cin >> numero;
    anterior = numero;
    while (numero != 0){
        if(numero < anterior){
            ordenado = false;
        }
        cin >> numero;
    }

    if(ordenado){
        cout << "Conjunto Ordenado.";
    } else {
        cout << "Conjunto No Ordenado.";
    }
    
    return 0;
}
/*
Hacer un programa para ingresar por teclado cuatro números.
Si los valores que se ingresaran están ordenados en forma creciente,
emitir el mensaje “Conjunto Ordenado”,
caso contrario emitir el mensaje: “Conjunto Desordenado”. 
Ejemplo A: si los números que se ingresan son 8, 10, 12 y 14, entonces están ordenados. 
Ejemplo B: si los números que se ingresan son 8, 12, 12 y 14, entonces están ordenados. 
Ejemplo C: si los números que se ingresan son 10, 8, 12 y 14, entonces están desordenados.
*/

#include <iostream>
using namespace std;
int main() {
    float numeroUno, numeroDos, numeroTres, numeroCuatro;
    cout << "Ingrese 4 números para saber si están ordenados: " << endl;
    cin >> numeroUno >> numeroDos >> numeroTres >> numeroCuatro;
    if(numeroUno <= numeroDos && numeroDos <= numeroTres && numeroTres <= numeroCuatro) {
        cout << "Conjunto Ordenado";
    } else {
        cout << "Conjunto Desordenado";
    }
    return 0;
}
/*
Basado en los 2 ejercicios anteriores,
hacer un programa para ingresar por teclado la longitud de los tres lados de un triángulo
y luego listar qué tipo de triángulo es: 
- Equilátero: si los tres lados son iguales.
- Isósceles: si dos de los tres lados son iguales.
- Escaleno: si los tres lados son distintos entre sí.
*/

#include <iostream>
using namespace std;

int main () {
    float ladoUno, ladoDos, ladoTres;
    cout << "Ingrese la longitud de los tres lados de un triángulo:" << endl;
    cin >> ladoUno >> ladoDos >> ladoTres;

    if(ladoUno == ladoDos || ladoUno == ladoTres) {
        if(ladoDos == ladoTres) {
            cout << "Es un triángulo equilátero.";
        } else {
            cout << "Es un triángulo isósceles.";
        }
    } else {
        cout << "Es un triángulo escaleno.";
    }
    return 0;
}
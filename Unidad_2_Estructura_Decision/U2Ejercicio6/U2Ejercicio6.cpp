/*
Hacer un programa para ingresar por teclado tres números
y luego determinar e informar con una leyenda aclaratoria si los tres son iguales entre sí,
caso contrario no emitir nada.
Tener en cuenta:  Si A es igual a B y B es igual a C, entonces A y C son iguales.
*/

#include <iostream>
using namespace std;

int main () {
    float numeroUno, numeroDos, numeroTres;
    cout << "Ingrese tres números. Si los tres números son iguales, le aviso:" << endl;
    cin >> numeroUno >> numeroDos >> numeroTres;
    if(numeroUno == numeroDos && numeroDos == numeroTres) {
        cout << "Los números son iguales.";
    }
    return 0;
}
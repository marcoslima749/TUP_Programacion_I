/*
Hacer un programa para ingresar cinco números y listar el máximo y el mínimo de ellos.
*/

#include <iostream>
using namespace std;
int main () {
    float numeroUno, numeroDos, numeroTres, numeroCuatro, numeroCinco, maximo;
    cout << "Ingrese 5 números para determinar su máximo: " << endl;
    cin >> numeroUno >> numeroDos >> numeroTres >> numeroCuatro >> numeroCinco;
    if(numeroUno > numeroDos) {
        maximo = numeroUno;
    } else {
        maximo = numeroDos;
    }

    if(numeroTres > maximo) {
        maximo = numeroTres;
    }
    if(numeroCuatro > maximo) {
        maximo = numeroCuatro;
    }
    if(numeroCinco > maximo) {
        maximo = numeroCinco;
    }

    cout << "El máximo es: " << maximo;
    return 0;
}
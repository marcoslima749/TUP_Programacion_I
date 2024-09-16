/*
Hacer un programa para ingresar tres números y listar el máximo de ellos.
*/

#include <iostream>
using namespace std;

int main () {
    float numeroUno, numeroDos, numeroTres;
    cout << "Ingrese tres números para determinar el máximo: " << endl;
    cin >> numeroUno;
    cin >> numeroDos;
    cin >> numeroTres;
    if(numeroUno > numeroDos) {
        if(numeroUno > numeroTres) {
            cout << "El máximo es: " << numeroUno;
        } else {
            cout << "El máximo es: " << numeroTres;
        }
    } else if(numeroDos > numeroTres) {
        cout << "El máximo es: " << numeroDos;
    } else {
        cout << "El máximo es: " << numeroTres;
    }
    return 0;
}

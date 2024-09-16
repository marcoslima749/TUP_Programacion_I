/*
Hacer un programa para ingresar cinco números y
listar cuantos de esos cinco números son positivos,
cuantos son negativos y cuantos son iguales a 0.
*/

#include <iostream>
using namespace std;
int main () {
    float numeroUno, numeroDos, numeroTres, numeroCuatro, numeroCinco;
    int negativos = 0, positivos = 0, ceros = 0;
    cout << "Ingrese 5 números para determinara la cantidad de positivos, negativos y ceros:" << endl;
    cin >> numeroUno >> numeroDos >> numeroTres >> numeroCuatro >> numeroCinco;
    if(numeroUno > 0) {
        positivos++;
    } else if(numeroUno < 0) {
        negativos++;
    } else {
        ceros++;
    }
    if(numeroDos > 0) {
        positivos++;
    } else if(numeroDos < 0) {
        negativos++;
    } else {
        ceros++;
    }
    if(numeroTres > 0) {
        positivos++;
    } else if(numeroTres < 0) {
        negativos++;
    } else {
        ceros++;
    }
    if(numeroCuatro > 0) {
        positivos++;
    } else if(numeroCuatro < 0) {
        negativos++;
    } else {
        ceros++;
    }
    if(numeroCinco > 0) {
        positivos++;
    } else if(numeroCinco < 0) {
        negativos++;
    } else {
        ceros++;
    }

    cout << "La cantidad de postivos es: " << positivos << endl;
    cout << "La cantidad de negativos es: " << negativos << endl;
    cout << "La cantidad de ceros es: " << ceros << endl;
    return 0;
}
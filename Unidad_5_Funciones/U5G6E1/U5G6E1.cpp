/*
Hacer una función llamada EsPar que determine si un número es par o no.

La función debe recibir un número entero por valor y devolver true si es par o false si no lo es.
La función no debe mostrar nada por pantalla. 

Hacer un programa para ingresar un número y,
utilizando EsPar, emita luego un cartel indicando si el número ingresado es par o no es par.
*/
#include <iostream>
using namespace std;

bool EsPar(int numero){
    return numero % 2 == 0;
}

int main(){
    int numero;
    cout << "Ingrese un número para determinar si es par: " << endl;
    cin >> numero;
    bool par = EsPar(numero);
    if(par){
        cout << "El número es par.";
    } else {
        cout << "El número es impar.";
    }

    return 0;
}
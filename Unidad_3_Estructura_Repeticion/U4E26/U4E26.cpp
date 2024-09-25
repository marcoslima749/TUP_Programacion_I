/*
Un número Simonírico es un número positivo divisible por 15
y a la vez divisible por 3 pero no divisible por 6.
Hacer un programa que muestre los primeros 1000 números Simoníricos.
El usuario no debe ingresar nada.
*/

#include <iostream>
using namespace std;
int main(){
    int numero = 1, simoniricos = 0;
    while(simoniricos < 1000) {
        if(numero % 15 == 0 && numero % 3 == 0 && numero % 6 != 0){
            cout << numero << endl;
            simoniricos++;
        }
        numero++;
    }
}
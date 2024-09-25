/*
Hacer un programa para que el usuario ingrese dos números
y luego el programa muestre por pantalla los números entre el menor y el mayor de ambos.
Ejemplo, si el usuario ingresa 3 y 15,
se mostrarán los números entre el 3 y el 15;
y si el usuario ingresa 25 y 8,
se mostrarán los números entre el 8 y el 25.
*/

#include <iostream>
using namespace std;

int main(){
    int numeroUno, numeroDos, mayor, menor;
    cout << endl << endl << "Ingrese dos números: " << endl;
    cin >> numeroUno >> numeroDos;
    cout << endl;
    if(numeroUno > numeroDos) {
        mayor = numeroUno;
        menor = numeroDos;
    } else {
        menor = numeroUno;
        mayor = numeroDos;
    }

    while (menor <= mayor){
        cout << menor << endl;
        menor++;
    }
    

    return 0;
}
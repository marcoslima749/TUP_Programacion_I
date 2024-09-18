/*
Hacer un programa para que el usuario ingrese dos números
y luego el programa muestre por pantalla los números entre el menor y el mayor de ambos. 
Ejemplo, si el usuario ingresa 3 y 15, se mostrarán los números entre el 3 y el 15
y si el usuario ingresa 25 y 8, se mostrarán los números entre el 8 y el 25.
*/

#include <iostream>
using namespace std;
int main() {
    int primerNumero, segundoNumero, mayor, menor;
    cout << "Ingrese dos números enteros distintos para saber los enteros entre ellos: " << endl;
    cin >> primerNumero >> segundoNumero;
    cout << endl;
    if(primerNumero > segundoNumero) {
        mayor = primerNumero;
        menor = segundoNumero;
    } else {
        menor = primerNumero;
        mayor = segundoNumero;
    }

    for (int i = menor; i <= mayor; i++){
        cout << i << endl;
    }
    


    return 0;
}

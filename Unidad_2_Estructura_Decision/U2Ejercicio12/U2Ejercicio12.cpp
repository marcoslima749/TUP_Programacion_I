/*
Hacer un programa para ingresar tres números diferentes
y determinar e informar el número del medio.

Sugerimos probar CADA UNA de las siguientes 6 combinaciones.
N1=8, N2=6, N3=10. Valor del medio: 8.
N1=8, N2=10, N3=6. Valor del medio: 8
N1=6, N2=8, N3=10. Valor del medio: 8.
N1=10, N2=8, N3=6. Valor del medio: 8
N1=6, N2=10, N3=8. Valor del medio: 8.
N1=10, N2=6, N3=8. Valor del medio: 8

*/

#include <iostream>

using namespace std;
int main() {
    float numeroUno, numeroDos, numeroTres;
    cout << "Ingrese tres números diferentes para conocer el número del medio: " << endl;
    cin >> numeroUno >> numeroDos >> numeroTres;
    if(numeroUno > numeroDos) {
        if(numeroUno < numeroTres) {
            cout << "El número del medio es: " << numeroUno;
        } else if ( numeroDos > numeroTres) {
            cout << "El número del medio es: " << numeroDos;
        } else {
            cout << "El número del medio es: " << numeroTres;
        }
    } else if(numeroDos < numeroTres) {
        cout << "El número del medio es: " << numeroDos;
    } else if(numeroUno > numeroTres){
        cout << "El número del medio es: " << numeroUno;
    } else {
        cout << "El número del medio es: " << numeroTres;
    }
    return 0;
}
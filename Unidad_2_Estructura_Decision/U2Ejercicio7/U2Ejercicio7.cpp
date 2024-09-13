/*
Hacer un programa para ingresar por teclado tres números
e informar con una leyenda aclaratoria si los tres son todos distintos entre sí,
caso contrario no emitir nada. 
Tener en cuenta: Si A es distinto de B y B es distinto de C, eso no significa que A y C sean distintos. Ejemplo: A=8, B=6 y C=8.
*/

#include <iostream>
using namespace std;

int main () {
    float numeroUno, numeroDos, numeroTres;
    cout << "Ingrese tres números. Si los tres números son distintos, le aviso:" << endl;
    cin >> numeroUno >> numeroDos >> numeroTres;
    if(numeroUno != numeroDos && numeroUno != numeroTres && numeroDos != numeroTres) {
        cout << "Los números son distintos.";
    }
    return 0;
}
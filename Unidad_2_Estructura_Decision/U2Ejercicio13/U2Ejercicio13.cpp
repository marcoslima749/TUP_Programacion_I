/*
Hacer un programa para ingresar tres números distintos y listarlos ordenados de menor a mayor. 
Sugerimos probar CADA UNA de las siguientes 6 combinaciones.
N1=8, N2=6, N3=10
N1=8, N2=10, N3=6. Se muestra: 6, 8, 10.
N1=6, N2=8, N3=10
N1=10, N2=8, N3=6. Se muestra: 6, 8, 10.
N1=6, N2=10, N3=8
N1=10, N2=6, N3=8. Se muestra: 6, 8, 10.
*/

#include <iostream>
using namespace std;
int main() {
    float numeroUno, numeroDos, numeroTres, menor, medio, mayor;
	cout << "Ingrese tres números distintos para ordernarlos: ";
	cin >> numeroUno >> numeroDos >> numeroTres;

    if(numeroUno < numeroDos){
        if(numeroDos < numeroTres){
            menor = numeroUno;
            medio = numeroDos;
            mayor = numeroTres;
        } else {
            if(numeroUno < numeroTres) {
                menor = numeroUno;
                medio = numeroTres;
                mayor = numeroDos;
            } else {
                menor = numeroTres;
                medio = numeroUno;
                mayor = numeroDos;
            }
        }
    } else {
        if(numeroDos < numeroTres) {
            if(numeroUno < numeroTres) {
                menor = numeroDos;
                medio = numeroUno;
                mayor = numeroTres;
            } else {
                menor = numeroDos;
                medio = numeroTres;
                mayor = numeroUno;
            }
        } else {
            menor = numeroTres;
            medio = numeroDos;
            mayor = numeroUno;
        }
    }
			
	cout << "Los números ordenados son: " << endl << menor << endl << medio << endl << mayor;
    return 0;
}
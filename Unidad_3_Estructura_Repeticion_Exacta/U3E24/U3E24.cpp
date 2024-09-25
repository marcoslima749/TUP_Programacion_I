/*
Hacer un programa que permita ingresar el sueldo de 10 empleados y determine:
El sueldo máximo.
El sueldo mínimo.
El sueldo promedio.
Cantidad de sueldos mayores a $50000.
*/

#include <iostream>
using namespace std;
int main(){
int sueldo, maximo, minimo, total = 0, promedio, cantMayoresCincuentamil = 0;
cout << "Ingrese 10 sueldos para conocer el mínimo, máximo, promedio y cantidad de mayores a 50k:" << endl;

for (int i = 0; i < 10; i++){
    cin >> sueldo;
    total+= sueldo;
    if(i == 0) {
        minimo = sueldo;
        maximo = sueldo;
    } else {
        if(sueldo < minimo) {
            minimo = sueldo;
        }
        if(sueldo > maximo) {
            maximo = sueldo;
        }
    }
    if(sueldo > 50000) {
        cantMayoresCincuentamil++;
    }

}
promedio = total / 10;

cout << "Sueldo máximo: " << maximo << endl << "Sueldo mínimo: " << minimo << endl << "Sueldo promedio: " << promedio << endl << "Cantidad de mayores a 50000: " << cantMayoresCincuentamil;
return 0;
}
/*
Hacer un programa que permita ingresar el legajo y sueldo de 10 empleados y determine:
El legajo del empleado con mayor sueldo
*/

#include <iostream>
using namespace std;

int main(){
int sueldo, legajo, maximo, legajoMaximo;
cout << "Ingrese el sueldo y el legajo de 10 empledos para conocer el legajo del sueldo máximo: " << endl;
for (int i = 0; i < 10; i++){
    cin >> sueldo >> legajo;
    if(i == 0) {
        maximo = sueldo;
        legajoMaximo = legajo;
    } else if(sueldo > maximo) {
        maximo = sueldo;
        legajoMaximo = legajo;
    }
}

cout << "El legajo del sueldo máximo es: " << legajoMaximo;

return 0;
}
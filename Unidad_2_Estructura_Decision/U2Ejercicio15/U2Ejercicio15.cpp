/*
Un año es bisiesto si es múltiplo de 4, exceptuando a los años que son múltiplos de 100
pero que no sean múltiplos de 400.
Esto último significa que el año 1900 no es bisiesto, pero el año 2000 sí lo es.
Hacer un programa para  ingresar un año
y listar por pantalla si es bisiesto o no lo es. 

Ejemplo A. Si se ingresa el año 2020 se indicará como bisiesto. 
Ejemplo B. Si se ingresa el año 2019 se indicará como no bisiesto. 
Ejemplo C. Si se ingresa el año 1800 o 1900 se indicará como no bisiesto.
Ejemplo D. Si se ingresa el año 1600 o 2000 se indicará como bisiesto.

*/

#include <iostream>
using namespace std;
int main() {
    int anio;
    cout << "Ingrese el año para saber si es bisiesto:" << endl;
    cin >> anio;
    if(anio % 4 == 0) {
        if(anio % 100 == 0 && anio % 400 != 0) {
            cout << "El año " << anio << " no es bisiesto.";
        } else {
            cout << "El año " << anio << " es bisiesto.";
        }
    } else {
            cout << "El año " << anio << " no es bisiesto.";
    }
    return 0;
}
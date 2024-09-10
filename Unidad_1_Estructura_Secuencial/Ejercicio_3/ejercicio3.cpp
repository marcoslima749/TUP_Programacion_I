/*
Una concesionaria de autos paga a los vendedores un sueldo fijo de $5000
más $700 de premio por cada auto vendido.
Hacer un programa que permita ingresar por teclado la cantidad de autos vendidos por un vendedor
y luego informar por pantalla el sueldo total a pagar.
Ejemplo. Si la cantidad de autos vendidos fuera 4
entonces el sueldo total a pagar es de $7800.
*/


#include <iostream>
using namespace std;

int main(){
    int cantidadAutosVendidos, sueldoAPagar;
    int sueldoBasico = 5000;
    int premioPorAuto = 700;
    cout << "Ingrese la cantidad de autos vendidos: " << endl;
    cin >> cantidadAutosVendidos;
    sueldoAPagar  = sueldoBasico + cantidadAutosVendidos * premioPorAuto;
    cout << "El sueldo total a pagar es: " << sueldoAPagar;
 return 0;
}

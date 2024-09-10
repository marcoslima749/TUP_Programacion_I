/*
Hacer un programa para ingresar por teclado la cantidad de horas trabajadas por un operario
y el valor que se le paga por hora trabajada}
y listar por pantalla el sueldo que le corresponda.
*/

#include <iostream>
using namespace std;

int main(){
 float cantidadHoras, valorHora, sueldo;
 cout << "Ingrese la cantidad de horas trabajadas: " << endl;
 cin >> cantidadHoras;
 cout << "Ingrese el valor de la hora de trabajo: " << endl;
 cin >> valorHora;
 sueldo = valorHora * cantidadHoras;
 cout << "El sueldo a pagar es: " << sueldo;
 return 0;
}

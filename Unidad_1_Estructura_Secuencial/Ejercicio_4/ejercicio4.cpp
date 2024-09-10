/*
Hacer un programa para ingresar por teclado la cantidad de asientos totales en un avión
y la cantidad de pasajes ocupados y luego calcular e informar el porcentaje de ocupación
y el porcentaje de no ocupación del mismo.
Ejemplo si el avión tiene 200 asientos totales y se vendieron 80 pasajes,
el porcentaje de ocupación que se informará será de un 40%
y el porcentaje de no ocupación será de un 60%.
*/

#include <iostream>
using namespace std;

int main(){
    float asientosTotales, pasajesVendidos;
    int ocupacion, noOcupacion;
	cout << "Ingrese la cantidad de asientos totales:" << endl;
	cin >> asientosTotales;
	cout << "Ingrese la cantidad de pasajes vendidos:" << endl;
	cin >> pasajesVendidos;
	ocupacion = pasajesVendidos / asientosTotales * 100;
	noOcupacion = 100 - ocupacion;
	cout << "El porcentaje de ocupación es: " << ocupacion << endl; 
	cout << "El porcentaje de no ocupación es: " << noOcupacion;
return 0;
}
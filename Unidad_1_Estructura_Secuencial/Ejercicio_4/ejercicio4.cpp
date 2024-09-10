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
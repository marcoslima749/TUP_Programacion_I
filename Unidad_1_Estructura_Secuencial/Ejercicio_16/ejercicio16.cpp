/*
El Laboratorio V&V hace frascos de píldoras para aprender a programar.
Cada frasco contiene 75 píldoras y cada píldora contiene 45 mg de Betamol,
2 grs de Micilina y 7 mg de Ácido Sinítico.
Nos solicitan un programa donde se ingrese la cantidad de frascos de un pedido
y muestre la cantidad de miligramos de Betamol, Micilina y de Ácido Sinítico
que son necesarios para elaborarlos
*/

#include <iostream>
using namespace std;

int main(){
    int pildoras = 75, betamol = 45, micilina = 2, sinitico = 7, frascos, totalPildoras, totalBetamol, totalMicilina,totalSinitico; 
	cout << "Ingrese la cantidad de frascos:";
	cin >> frascos;
	totalPildoras = frascos * pildoras;
	totalBetamol = totalPildoras * betamol;
	totalMicilina = totalPildoras * micilina * 1000;
	totalSinitico = totalPildoras * sinitico;
	cout << "Las cantidades necesarias para elaborar el pedido son:" << endl;
	cout << "Betamol: " << totalBetamol << " mg" << endl;
	cout << "Micilina: " << totalMicilina << " mg" << endl;
	cout << "Ácido Sinítico: " << totalSinitico << " mg";

return 0;
}
/*
Una fábrica de caramelos dispone de un presupuesto inicial para inaugurar su sucursal en Villa Brian Lara.
Se sabe que para producir caramelos tienen los siguientes costos:

Costo de alquiler de $10000
Costo por caramelo producido de $2.50
Costo por mantenimiento cada 100 caramelos de $5000

Dados el presupuesto inicial y la cantidad de caramelos a producir el primer mes, informar:
"El presupuesto es suficiente para cubrir los costos de $XXXX"
"El presupuesto no es suficiente, necesita un crédito de $XXXX"
*/

#include <iostream>
using namespace std;

int main(){

    float alquiler = 10000, costoCaramelo = 2.50, costoMantenimiento = 5000/100, presupuesto, caramelos, costoTotal;

	cout << "Ingrese el presupuesto inicial y la cantidad de caramelos a producir: " << endl;
	cin >> presupuesto >> caramelos;
	costoTotal = alquiler + costoCaramelo * caramelos + costoMantenimiento * caramelos;
	if (costoTotal<presupuesto) {
		cout << "El presupuesto es suficiente para cubrir los costos de $" << costoTotal;
    } else {
		cout << "El presupuesto no es suficiente, necesita un crédito de $" << costoTotal - presupuesto;
    }
    return 0;
}
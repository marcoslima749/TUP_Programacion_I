/*
Hacer un programa para ingresar el importe de una compra y el descuento a aplicar.
Listar por pantalla, el importe sin descuento,
el descuento aplicado y el importe total a cobrar.
Ejemplo: se ingresa importe 4500, descuento 40; se deberá mostrar
Importe: 4500, Descuento: 1800, total: 2700.
*/

#include <iostream>
using namespace std;

int main(){

    float importe, descuento, importeDescuento, totalAPagar;
	cout << "Ingrese el importe de la compra:";
	cin >> importe;
	cout << "Ingrese el descuento a aplicar:";
	cin >> descuento;
	importeDescuento = importe * descuento / 100;
	totalAPagar = importe - importeDescuento;
	cout << "Importe: " << importe << " Descuento: " << importeDescuento << " total: " << totalAPagar;

return 0;
}
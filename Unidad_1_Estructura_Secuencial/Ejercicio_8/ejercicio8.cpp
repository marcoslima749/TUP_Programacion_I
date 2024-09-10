/*
Hacer un programa para ingresar por teclado el importe de una venta sin el descuento
y el importe de esa misma venta con el descuento aplicado
y luego informar por pantalla el porcentaje de descuento aplicada a la misma.
Ejemplo A. Si el importe de la venta sin descuento es $1500
y el importe de la venta con descuento es $1200
entonces el porcentaje de descuento aplicadofue el 20%.
Importante: Le sugerimos que haga una prueba con este ejemplo,
ya que muchos lo resuelven y concluyen que el descuento es el 80%.
Eso NO es el descuento. Si el descuento fuera de 80%
entonces una venta de $1500 se cobraría tan solo $300.
Ejemplo B. Si el importe de la venta sin descuento es $500
y el importe de la venta con descuento es $500
entonces el porcentaje de descuento aplicado fue el 0%.
*/

#include <iostream>
using namespace std;

int main(){
    float sinDescuento, conDescuento, descuento;
	cout << "Ingrese el importe de la venta sin descuento:";
	cin >> sinDescuento;
	cout << "Ingrese el importe de la venta con descuento:";
	cin >> conDescuento;
	descuento = (1-(conDescuento / sinDescuento))*100;
	cout << "El porcentaje de descuento es: " << descuento;
return 0;
}
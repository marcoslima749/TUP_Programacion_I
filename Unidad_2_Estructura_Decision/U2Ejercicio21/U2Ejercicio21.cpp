/*
Una marroquinería dispone de
45 carteras blancas,
50 carteras negras,
40 marrones y 
49 grises.

Se pide hacer un programa donde se ingresen tres ventas. Cada venta está compuesta por:

Cantidad de carteras
Tipo de cartera (1 - Blanco, 2 - Negro, 3- Marrón, 4 - Gris)

Calcular e informar:
Cantidad total de carteras vendidas en total.
Cuántas carteras quedaron de cada tipo.
Los colores de carteras que no se vendieron.
NOTA: Ninguna venta superará las 10 carteras.

*/

#include <iostream>
using namespace std;

int main(){
    cout << "Ingrese tres ventas, indicando: " << endl;
	cout << "Cantidad de carteras" << endl;
	cout << "Tipo de cartera (1 - Blanco, 2 - Negro, 3- Marrón, 4 - Gris)" << endl;
	int blancas = 45;
	int negras = 50;
	int marrones = 40;
	int grises = 49;
	int totalVentas = 0;
    int cantidadUno, tipoUno, cantidadDos, tipoDos, cantidadTres, tipoTres, cantidadCuatro, tipoCuatro;

	cin >> cantidadUno >> tipoUno;
	totalVentas = totalVentas+cantidadUno;
    switch (tipoUno)    {
        case 1:
			blancas = blancas-cantidadUno;
        break;
        case 2:
			negras = negras-cantidadUno;
        break;
        case 3:
			marrones = marrones-cantidadUno;
        break;
        case 4:
			grises = grises-cantidadUno;
        break;
    }

    cin >> cantidadDos >> tipoDos;
	totalVentas = totalVentas+cantidadDos;
    switch (tipoDos)    {
        case 1:
			blancas = blancas-cantidadDos;
        break;
        case 2:
			negras = negras-cantidadDos;
        break;
        case 3:
			marrones = marrones-cantidadDos;
        break;
        case 4:
			grises = grises-cantidadDos;
        break;
    }

    cin >> cantidadTres >> tipoTres;
	totalVentas = totalVentas+cantidadTres;
    switch (tipoTres)    {
        case 1:
			blancas = blancas-cantidadTres;
        break;
        case 2:
			negras = negras-cantidadTres;
        break;
        case 3:
			marrones = marrones-cantidadTres;
        break;
        case 4:
			grises = grises-cantidadTres;
        break;
    }

    
	cout << "Cantidad total de carteras vendidas es: " << totalVentas << endl;
	cout << "El stock actual es: " << endl;
	cout << blancas << " carteras blancas." << endl;
	cout << negras << " carteras negras." << endl;
	cout << marrones << " carteras marrones." << endl;
	cout << grises << " carteras grises." << endl;

	if(blancas==45) {
		cout << "No se vendieron carteras blancas.";
    }
	
	if(negras==50) {
		cout << "No se vendieron carteras negras.";
    }
	
	if(marrones==40) {
		cout << "No se vendieron carteras marrones.";
    }
	
	if(grises==49) {
		cout << "No se vendieron carteras grises.";
    }
	
return 0;
}
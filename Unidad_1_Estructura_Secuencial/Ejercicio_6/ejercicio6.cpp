
/*
Hacer un programa para que un comercio ingrese por teclado la recaudación en pesos
para cada una de las cuatro semanas del mes. El programa debe listar la recaudación promedio
por semana y el porcentaje de recaudación por semana.
Ejemplo. Si se ingresa $1600, $1200, $4800 y $400 se listará como recaudación promedio $2000
y como porcentajes por semana: 20%, 15%, 60% y 5%.
*/

#include <iostream>
using namespace std;

int main(){
    float primeraSemana, segundaSemana, terceraSemana, cuartaSemana, total, promedio;
    float pPrimeraSemana, pSegundaSemana, pTerceraSemana, pCuartaSemana;

	cout << "Ingrese la recaudación de la primera semana:";
	cin >> primeraSemana;
	cout << "Ingrese la recaudación de la segunda semana:";
	cin >> segundaSemana;
	cout << "Ingrese la recaudación de la tercera semana:";
	cin >> terceraSemana;
	cout << "Ingrese la recaudación de la cuarta semana:";
	cin >> cuartaSemana;
	total = primeraSemana + segundaSemana + terceraSemana + cuartaSemana;
	promedio = total / 4;
	pPrimeraSemana = primeraSemana / total * 100;
	pSegundaSemana = segundaSemana / total * 100;
	pTerceraSemana = terceraSemana / total * 100;
	pCuartaSemana = cuartaSemana / total * 100;
	cout << "La recaudación promedio es: " << promedio << endl;
	cout << "Los porcentajes de recaudación por semana son:" << endl;
	cout << "Primera semana: " << pPrimeraSemana << endl;
	cout << "Segunda semana: " << pSegundaSemana << endl;
	cout << "Tercera semana: " << pTerceraSemana << endl;
	cout << "Cuarta semana: " << pCuartaSemana << endl;

return 0;
}
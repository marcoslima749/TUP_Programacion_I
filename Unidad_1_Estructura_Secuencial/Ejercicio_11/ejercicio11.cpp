/*
Hacer un programa para ingresar por teclado una cantidad de minutos
y mostrar por pantalla a cuántos días, horas y minutos equivalen.
Ejemplo A: si se ingresan 1520 minutos el programa mostrará por pantalla
que equivalen a 1 día, 1 hora y 20 minutos.
Ejemplo B: si se ingresan 480 minutos el programa mostrará por pantalla
que equivalen a 0 día, 8 horas y 0 minutos.
*/

#include <iostream>
using namespace std;

int main(){
    int minutos, minutosRestantes, horas, horasRestantes, dias;

	cout << "Ingrese la cantidad de minutos:";
	cin >> minutos;
	minutosRestantes = minutos%60;
	horas = (minutos-minutosRestantes)/60;
	horasRestantes = horas % 24;
	dias = (horas - horasRestantes) / 24;
	cout << minutos << " minuto/s equivale/n a " << dias  << " dia/s " << horasRestantes << " hora/s y " << minutosRestantes << " minuto/s.";

return 0;
}


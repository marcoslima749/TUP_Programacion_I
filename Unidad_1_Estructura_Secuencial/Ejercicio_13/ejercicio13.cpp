/*
Hacer un programa para un cajero automático para ingresar un importe a retirar
y convertir el mismo en la cantidad de billetes de $1.000, $500, $200 y $100 a entregar.
Ejemplo A: Si el importe a retirar es $2500
se mostrará por pantalla que se deberán entregar 2 billetes de $1.000, 1 billete de $500,  0 billetes de $200 y 0 billetes de $100.
Ejemplo B: Si el importe a retirar es $3400
se mostrará por pantalla que se deberán entregar 3 billetes de $1.000, 2 billetes de $200, 0 billetes de $500 y 0 billetes de $100.
Ejemplo C: Si el importe a retirar es $300
se mostrará por pantalla que se deberán entregar 1 billete de $200, 1 billete de $100, 0 billetes de $1.000 y 0 billetes de $500.
Recordatorio. Considerar en todos los casos que el importe a retirar
es en todos los casos múltiplo de $100
ya que el cajero no cuenta con billetes de $50, $20 o $10.
*/

#include <iostream>
using namespace std;

int main(){
    int importe, restoMil, mil, restoQuinientos, quinientos, restoDoscientos, doscientos, restoCien, cien;
	cout << "Ingrese el importe a retirar (en múltiplos de 100):";
	cin >> importe;
	restoMil = importe % 1000;
	mil = (importe - restoMil) / 1000;
	restoQuinientos = restoMil % 500;
	quinientos = (restoMil - restoQuinientos ) / 500;
	restoDoscientos = restoQuinientos % 200;
	doscientos = (restoQuinientos - restoDoscientos) / 200;
	restoCien = restoDoscientos % 100;
	cien = (restoDoscientos - restoCien) / 100;
	cout << "Se entregaran:" << endl;
	cout << mil << " billete/s de $1000" << endl;
	cout << quinientos << " billete/s de $500" << endl;
	cout << doscientos << " billete/s de $200" << endl;
	cout << cien << " billete/s de $100" << endl;
return 0;
}
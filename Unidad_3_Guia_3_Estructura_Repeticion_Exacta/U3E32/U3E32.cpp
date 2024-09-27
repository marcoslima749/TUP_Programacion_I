/*
Se ingresa una lista de 10 números enteros 
y se pide determinar si la lista está formada
por todos números alternados entre pares e impares o impares y pares.

Ejemplo A: 8, 7, 10, -5, 20, 3, -10, 5, -10, -7 se lista el cartel “Alternados”.
Ejemplo B: 5, 12, -5, 10, 13, 40, -11, 6, -7, -6 se lista el cartel “Alternados”.
Ejemplo C: 5, 5, -5, 10, 10, 40, -11, 6, -7, -6 se lista el cartel “No Alternados”.

*/

#include <iostream>
using namespace std;

int main(){
    int numero;
    string mensaje = "Alternados";
    bool par;
cout << "Ingrese 10 números enteros:" << endl;
for (int i = 0; i < 10; i++){
    cin >> numero;
    int parActual = numero % 2 == 0;

    if(i == 0 || parActual != par){
        par = parActual;
    } else {
        mensaje = "No Alternados";
    }

}

cout << mensaje;
return 0;
}
/*
Dada una lista de 7 números enteros
informar el primer número par ingresado y su ubicación en la lista
y el último de los números primos y su ubicación en la lista.
Ejemplo A: 7, 4, 5, 6, 9, 13, 10 se informa: 
Primer número par: 4 ubicación 2. Último primo: 13 ubicación 6. 
Ejemplo B: 9, 5, 21, 9, 13, 15, 6 se informa: 
Primer número par: 6 ubicación 7. Último primo: 13 ubicación 5.
*/

#include <iostream>
using namespace std;

int main(){
int numero, primerPar, posicionPar, ultimoPrimo, posicionPrimo, divisores = 0;
bool primero = true;
cout << "Ingrese 7 números enteros para conocer el primer par y el último primo y sus posiciones:" << endl;
for (int i = 1; i <= 7; i++){
    cin >> numero;
    if(primero && numero % 2 == 0) {
        primerPar = numero;
        posicionPar = i;
        primero = false;
    }
    for (int j = 1; j <= numero; j++){
        if(numero % j == 0) {
            divisores++;
        }
    }
    if(divisores == 2) {
        ultimoPrimo = numero;
        posicionPrimo = i;
    }
        divisores = 0;
}

cout << "Primer número par: " << primerPar << " Posición: " << posicionPar << endl << "Último número primo: " << ultimoPrimo << " Posición: " << posicionPrimo << endl;

return 0;
}
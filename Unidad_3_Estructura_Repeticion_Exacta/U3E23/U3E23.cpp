/*
Dada una lista de 10 números enteros informar
la cantidad de duplas de números impares que se hayan ingresado consecutivamente. 
Ejemplo A: 12, 3, 5, 7, 6, 9, 13, 10, 7, -5. 

En esta lista las duplas son: 3:5, 5:7, 9:13, 7:-5
por lo tanto se informará que hay 4 duplas de números impares ingresados consecutivamente.

Ejemplo B: 3, 5, 7, 10, 3, 5, 7, 10, 3, 5.
En esta lista las duplas son: 3:5, 5:7, 3:5, 5:7, 3:5
por lo tanto se informará que hay 5 duplas de números impares ingresados consecutivamente.

Aclaración: Sólo hay que listar la cantidad de duplas de impares.
No hay que mostrar cómo están compuestas las duplas de números.

*/

#include <iostream>
using namespace std;

int main(){
    int anterior, actual, duplas = 0;
cout << "Ingrese 10 números para conocer la cantidad de duplas de números impares consecutivos:" << endl;
for (int i = 0; i < 10; i++){
    cin >> actual;
    if(i != 0 && actual % 2 != 0 && anterior % 2 != 0) {
        duplas++;
    }
    anterior = actual;
}

cout << "Hay " << duplas << " duplas de números impares consecutivos.";
return 0;
}
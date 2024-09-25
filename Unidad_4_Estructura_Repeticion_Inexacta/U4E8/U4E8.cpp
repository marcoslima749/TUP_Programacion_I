/*
Hacer un programa para ingresar una lista de números que finaliza cuando se ingresa un cero,
luego informar el máximo y la posición del máximo en la lista.
En caso de “empates” considerar la primera aparición.
Ejemplo A: 5, -10, 20, 8, 25, 13, 35, -8, -5, 20, 0. Se listará Máximo 35 Posición 7.
Ejemplo B: 5, -10, 20, 8, 25, 13, 55, -8, 55, 20, 0. Se listará Máximo 55 Posición 7.
Ejemplo C: -9, -10, -20, -3, -9, -13, -55, -18, -55, 0. Se listará Máximo -3 Posición 4.
*/

#include <iostream>
using namespace std;

int main(){
    int numero, maximo, posicion = 1, posicionMaximo = 1;
    
    cout << endl << endl << "Ingrese una lista de números que finaliza con 0: " << endl;
    cin >> numero;
    maximo = numero;
    while(numero != 0){
        if(numero > maximo) {
            maximo = numero;
            posicionMaximo = posicion;
        }
        posicion++;
        cin >> numero;
    }
    cout << "Maximo: " << maximo << " Posición: " << posicionMaximo;
    return 0;
}
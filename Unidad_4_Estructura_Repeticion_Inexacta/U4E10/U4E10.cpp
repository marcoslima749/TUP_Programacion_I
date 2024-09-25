/*
Hacer un programa para ingresar una lista de números que finaliza cuando se ingresa un cero,
luego informar el máximo y el mínimo. 

Ejemplo A: 10, 20, -5, 30,-15, 5, 42, 2, 22, -13, 0. 
Se listará Máximo 42 Mínimo -15. 

Ejemplo B: 10, 20, 5, 30, 15, 5, 42, 8, 22, 13, 0. 
Se listará Máximo 42 Mínimo 5. 

Ejemplo C: -10, -20, -5, -30, -15, -12, -42, -8, -22, -13, 0. 
Se listará Máximo -5 Mínimo -42. 

Observe que los ejemplos B y C dejan en claro que la suposición de que el máximo “seguramente” es un positivo y el mínimo “seguramente” es un negativo, es incorrecta.

*/

#include <iostream>
using namespace std;

int main(){
    int maximo, minimo, numero, primero = true;

    cout << endl << endl << "Ingrese una lista de números finalizada en 0:" << endl;
    cin >> numero;

    while(numero != 0) {

        if(primero) {
            maximo = numero;
            minimo = numero;
            primero = false;
        } else if(numero > maximo) {
            maximo = numero;
        } else if (numero < minimo) {
            minimo = numero;
        }

        cin >> numero;
    }
    cout << "Maximo: " << maximo << endl << "Mínimo: " << minimo;
    return 0;
}

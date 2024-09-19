/*
Hacer un programa para ingresar una lista de 13 números enteros.
Se pide luego determinar e informar:

A) La cantidad de ternas de valores positivos consecutivos.
B) La cantidad de ternas de valores negativos consecutivos y ordenados en forma creciente.

Ejemplo si la lista fuera: 10, 5, 4, 3, -8, -3, -1, 0, 3, 8, -5, -8, -10
entonces el programa detectará una terna de positivos consecutivos (10, 5, 4)
y una terna de negativos consecutivos ordenados (-8, -3, -1)

Nota: Si el número ingresado es cero, no se lo considera ni negativo ni positivo.
Nota: La terna (-5, -8, -10) no es contabilizada ya que no se encuentra ordenada crecientemente.

*/

#include <iostream>
using namespace std;

int main(){
int numero, anterior, ternasPositivas = 0, ternasNegativas = 0, contador = 0;
cout << "Ingrese 13 números enteros: " << endl;
for (int i = 0; i < 13; i++) {
    cin >> numero;
    if(i == 0 || numero > 0 && anterior > 0 || numero < 0 && anterior < 0 && numero > anterior) {
        contador++;
    } else {
        contador = 1;
    }
    if(contador == 3) {
        if(numero > 0) {
            ternasPositivas++;
        } else {
            ternasNegativas++;
        }
    }
        anterior = numero;
}

cout << "Ternas positivas: " << ternasPositivas << endl << "Ternas negativas: " << ternasNegativas;

return 0;
}
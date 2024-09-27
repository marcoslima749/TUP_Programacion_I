/*
Desafío

Tu sobrina está aprendiendo las tablas de multiplicar y quisiera disponer de un programa 
para que pueda corroborar que las cuentas realizadas en su cuaderno sean correctas.
Ella sabe que estás estudiando programación en la universidad
y le parece que es algo que no debería llevarte más que unos pocos minutos.
Puntualmente te pidió que puedas ingresar un número entre 1 y 15
y dibuje por pantalla las tablas de dicho número desde el 0 hasta el 10 inclusive.

Por ejemplo:

Ingresa el número del cual quieres ver los cálculos: 6

6 x 1 = 6
6 x 2 = 12
6 x 3 = 18
6 x 4 = 24
6 x 5 = 30
6 x 6 = 36
6 x 7 = 42
6 x 8 = 48
6 x 9 = 54
6 x 10 = 60

Recorrer un ciclo exacto mediante una variable numérica no es la única manera de realizar un ciclo exacto. Existe también una alternativa de ciclo exacto que utiliza un iterador. Este particular ciclo referencia en cada iteración un elemento distinto dentro de una colección. Comenzando desde el primer elemento de la colección hasta el último de ellos (el ciclo sabe cuál es el elemento inicial y cuál el final). Este tipo de ciclo se conoce en otros lenguajes como for each. En C++ su sintaxis es como la siguiente:

for (int elemento: coleccionElementos){
   // Hacer algo con el elemento de la iteración
}

En este ejemplo se utiliza int dentro del for porque, para el ejemplo, se asume que la colección de elementos es de números enteros. Pero podría ser string, char, float, bool, etc.

Para esto es necesario conocer los objetos que nos permiten representar colecciones de información. Como los vectores, listas, etc. Esto se verá más adelante en la carrera.


*/

#include <iostream>
using namespace std;
int main() {
    int numero;
    cout << "Ingresa el número del cual quieres ver los cálculos: ";
    cin >> numero;
    cout << endl;
    for(int i = 1; i <= 10; i++) {
        cout << numero << " x " << i << " = " << numero * i << endl;
    }
    return 0;
}
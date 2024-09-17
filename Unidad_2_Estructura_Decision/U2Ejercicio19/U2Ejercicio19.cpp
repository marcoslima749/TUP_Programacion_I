/*
El costo de un desarrollo de un proyecto de software
se calcula en base al lenguaje que se necesita: 

Nombre  Tipo    Valor hora
C/C++   'C'     $ 7500
C#      '#'     $ 6100
Python  'P'     $ 5400
Go      'G'     $ 5000

Además, si el proyecto es marcado como Urgente,
se le aumenta un 120 % más al costo del proyecto. 
Le solicitan un programa que permita calcular el costo total de un proyecto
basado en la cantidad de horas (int), el tipo de lenguaje (char) y si es urgente o no (bool)

*/

#include <iostream>
using namespace std;
int main(){
    int horas;
    float totalAPagar;
    char lenguaje;
    bool urgente;
    
    cout << "Ingrese la cantidad de horas necesarias, sin decimales: " << endl;
    cin >> horas;
    cout << "Ingrese el lenguaje a utilizar, siendo C para C/C++, # para C#, P, para Python, y G para Go: " << endl;
    cin >> lenguaje;
    cout << "Ingrese 1 si el trabajo es urgente, o 0, si no lo es:" << endl;
    cin >> urgente;

    // 'C' == 67 '#' == 35 'P' == 80 'G' == 71
    switch (lenguaje) {
        case 67:
        totalAPagar =  7500 * horas;
        break;
        case 35:
        totalAPagar =  6100 * horas;
        break;
        case 80:
        totalAPagar =  5400 * horas;
        break;
        case 71:
        totalAPagar =  5000 * horas;
        break;
    }

    if(urgente){
        totalAPagar *= 2.20;
    }

    cout << "El total a pagar es: $" << totalAPagar << ".";

    return 0;


}
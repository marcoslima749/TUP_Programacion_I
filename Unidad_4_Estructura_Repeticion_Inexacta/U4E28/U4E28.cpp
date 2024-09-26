/*
Hacer un programa que contenga un menú con el siguiente formato:

Menú principal
-----------------------------
1 - Ingresar medida en metros
2 - Convertir a centímetros
3 - Convertir a kilómetros
4 - Convertir a pulgadas
5 - Convertir a pies
-----------------------------
0 - Salir del programa

Ingrese opción: 


Al ingresar a la opción 1, nos pedirá una medida (float) en metros
que con las siguientes opciones del menú podremos mostrarla convertida a otras unidades.
El programa debe permitir al usuario ingresar a las opciones las veces que lo desee
y sólo finalizará al ingresar a la opción 0.

*/

#include <iostream>
using namespace std;
int main(){
    float medida = -1;
    int operacion = -1;
    bool primerIngreso = true;

    while(operacion != 0){

            cout << "Menú principal" << endl;
            cout << endl;
            cout << "-----------------------------" << endl;
            cout << "1 - Ingresar medida en metros" << endl;
            cout << "2 - Convertir a centímetros" << endl;
            cout << "3 - Convertir a kilómetros" << endl;
            cout << "4 - Convertir a pulgadas" << endl;
            cout << "5 - Convertir a pies" << endl;
            cout << "-----------------------------" << endl;
            cout << "0 - Salir del programa" << endl;
            cout << endl;
            cout << "Ingrese opción: " << endl;

            cin >> operacion;

            if(primerIngreso) {
                switch (operacion){
                case 2:
                case 3:
                case 4:
                case 5:
                    cout << "Ingrese la medida en metros:" << endl;
                    cin >> medida;
                    primerIngreso = false;
                    break;
                }
            }

            switch (operacion){
            case 1:
                cout << "Ingrese la medida en metros:" << endl;
                cin >> medida;
                operacion = -1;
                break;
            case 2:
                cout << "La medida equivale a " << medida * 100 <<" centímetros." << endl << endl;
                break;
            case 3 :
                cout << "La medida equivale a " << medida / 1000 << " kilómetros." << endl << endl;
                break;
            case 4:
                cout << "La medida equivale a " << medida * 39.3701f << " pulgadas." << endl << endl;
                break;
            case 5:
                cout << "La medida equivale a " << medida * 3.28084f << " pies." << endl << endl;
                break;
            default:
                break;
            }
            primerIngreso = false;

    }
    return 0;
}
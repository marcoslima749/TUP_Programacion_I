/*
Hacer un programa que le pida al usuario ingresar un número positivo llamado N.
Luego, el programa debe listar todos los números primos que hay entre el número 2 y N.
*/


#include <iostream>
using namespace std;
int main(){
    int N;
    cout << "Ingrese un número N"<< endl;

    //Ingreso de datos
    cin >> N;
    bool primerPrimo = true;
    //Proceso

    for (int i = 2; i <= N; i++){
        bool esPrimo = true;
        int primoActual;
        int j = 2;
        while (j < i){
            if( i % j == 0){
                esPrimo = false;
            }
            j++;
        }
        if(esPrimo){
            if(primerPrimo){
            primerPrimo = false;
            cout << "Los números primos anteriores a " << N << " son: " << endl;
            }
            cout << i << endl;
        }
    }

    if(primerPrimo){
        cout << "No hay números primos anteriores a " << N << endl;
    }

    system("pause");
    return 0;
}
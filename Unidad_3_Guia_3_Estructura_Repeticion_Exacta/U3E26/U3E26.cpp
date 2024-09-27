/*
Hacer un programa que muestre los números primos entre el 1 y el 10000.
El usuario no debe ingresar nada en este programa.
*/

#include <iostream>
using namespace std;

int main(){
for (int i = 1; i <= 10000; i++){
    int divisores = 0;
    for(int j = 1; j <= i; j++) {
        if( i % j == 0) {
            divisores++;
        }
    }
    if (divisores == 2) {
        cout << i << " - ";
    }
}

return 0;
}
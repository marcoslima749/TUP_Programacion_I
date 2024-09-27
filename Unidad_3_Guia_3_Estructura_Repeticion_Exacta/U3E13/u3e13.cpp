/*
Dada una lista de 10 números enteros informar cual es el máximo de los pares. 
Ejemplo A: 2, 10, 20, 8, 25, 13, 36, - 8, -5, 20 se informa máximo: 36
Ejemplo B 5, -13, 23, 81, -55, -13, 55, 4, 15 ,-20 Se informa máximo: 4
Ejemplo C: -5, -13, -20, -8, -55, -13, -55, -14, -15, -20 se informa máximo: -8
*/

#include <iostream>
using namespace std;
int main(){
    int numero, maximoPares;
    bool primerPar = true;
    cout << "Ingrese 10 números para conocer el máximo de los pares: " << endl;
    
    for (int i = 0; i < 10; i++){
        cin >> numero;
        if(numero % 2 == 0){
            if(primerPar){
                maximoPares = numero;
                primerPar = false;
            } else if(numero > maximoPares) {
                maximoPares =  numero;
            }
        }
    }

    if(primerPar){
        cout << "No se ingresó ningún número par." << endl;
    } else {
        cout << "Máximo de los pares: " << maximoPares << endl;
    }
    system("pause");
    
  
  return 0;
}
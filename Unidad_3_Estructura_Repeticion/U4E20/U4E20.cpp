/*
Dada una lista de números que finaliza cuando se ingresa un cero,
informar el primer número par ingresado y su ubicación en la lista
y el último de los números primos y su ubicación en la lista. 

Ejemplo A: 7, 4, 5, 6, 9, 13, 10
se informa Primer número par: 4 ubicación 2.  Último primo: 13 ubicación 6. 
Ejemplo B: 9, 5, 21, 9, 13, 15, 6
se informa Primer número par: 6 ubicación 7. Último primo: 13 ubicación 5.

*/

#include <iostream>
using namespace std;
int main(){
  int numero, posicion = 0, primerPar, posicionPrimerPar = 0, ultimoPrimo, posicionUltimoPrimo = 0, divisor;
  bool primo = true;

    cout <<"Ingrese una lista de números finalizada en 0: " << endl;
    do {
        posicion++;
        divisor = 2;
        cin >> numero;
        if(posicionPrimerPar == 0 && numero % 2 == 0) {
            primerPar = numero;
            posicionPrimerPar = posicion;
        }
        
        if(numero < 2){
            primo = false;
        } else {

            while(divisor < numero) {
                if(numero % divisor == 0) {
                    primo = false;
                }
                divisor++;
            }
        }

        if(primo) {
            ultimoPrimo = numero;
            posicionUltimoPrimo = posicion;
        } else {
            primo = true;
        }
    } while (numero != 0);
    

  cout << "El primer número par fue el " << primerPar << " en la posición " << posicionPrimerPar << endl;
  cout << "El último primo fue el " << ultimoPrimo << " en la posición " << posicionUltimoPrimo << endl;

  cout << endl << endl;
  system("pause");
  return 0;
}
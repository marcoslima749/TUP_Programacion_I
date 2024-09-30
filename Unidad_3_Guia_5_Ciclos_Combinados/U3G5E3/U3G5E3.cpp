#include <iostream>
using namespace std;

int main() {
/*
Se dispone de una lista de 10 grupos de números y cada uno de los grupos
estará compuesto por 5 números. Se pide determinar e informar:
a) Para cada uno de los 10 grupos la cantidad de números positivos, negativos
y ceros que lo componen. Se informan 3 resultados para cada uno de los 10
grupos.
b) Para cada uno de los 10 grupos el último número primo y en qué orden
apareció en ese grupo, si en un grupo no hubiera números primos informar
con un cartel aclaratorio.
c) Informar cuántos números impares hay en total entre los 10 grupos. Se
informa un resultado al final de todo.
*/
    cout << "Ingrese 10 grupos de 5 numeros:" << endl;
    int cantidadDeImpares = 0;
    
    for(int grupo = 1; grupo <= 10; grupo++){
        
      int numero;
      int positivos = 0, negativos = 0, ceros = 0;
      int ultimoPrimo = -1;
      int ordenUltimoPrimo = -1;
      
    
    for(int num = 1; num <= 5; num++){
      bool esPrimo = true;
          
      cin >> numero;
      
      for(int i = 2; i < numero; i++){
          if(numero % i == 0){
              esPrimo = false;
              break;
          }
      }
      
      if(esPrimo){
      ultimoPrimo = numero;
      ordenUltimoPrimo = num;
      }
      
      
      if(numero > 0){
          positivos++;
      } else if(numero < 0){
          negativos++;
      } else {
          ceros++;
      }
      
      if(numero % 2 != 0){
         cantidadDeImpares++; 
      }
      

      
    }
    
      cout << "Positivos: " << positivos << endl;
      cout << "Negativos: " << negativos << endl;
      cout << "Ceros: " << ceros << endl;
      if(ultimoPrimo != -1){
         cout << "El ultimoPrimo es " << ultimoPrimo << " en el orden " << ordenUltimoPrimo << endl;
      } else {
          cout << "No hubo numeros primos en el grupo." << endl;
      }
    
    
    }
    cout << "La cantidad de impares fue " << cantidadDeImpares << endl;
    return 0;
}
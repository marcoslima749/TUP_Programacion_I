/*
La cuenta corriente de la famosa cantante Lady Lara ha registrado 14 movimientos durante la semana pasada. Por cada movimiento se registró:
Número de movimiento
Día
Tipo ('E' - Extracción / 'D' - Depósito)
Importe

Existe un registro por movimiento. Se desea calcular e informar:
El saldo final de la cuenta.
El porcentaje de movimientos de extracción y el porcentaje de depósito.
El depósito de mayor importe indicando también día y número de movimiento.
La cantidad de movimientos del día 10.

*/

#include <iostream>
#include <iomanip>
using namespace std;
int main(){
  int dia, diaMaximo, movimientoMaximo, cantExtracciones = 0, cantDepositos = 0, movsDiaDiez = 0, porcentajeDep;
  char tipo;
  float importe = 0.0f, maximo = 0.0f, saldo = 0.0f;
  cout << "Ingrese los 14 movimientos indicando: Día, Tipo ('E' - Extracción / 'D' - Depósito), Importe:" << endl;

  for(int i = 1; i <= 14; i++) {
    cout << "Movimiento " << i << ":" << endl;
    cin >> dia >> tipo >> importe;
    if(tipo == 'E') {
        cantExtracciones++;
    } else if(tipo == 'D') {
        cantDepositos++;
        if(importe > maximo) {
            maximo = (float)importe;
            diaMaximo = dia;
            movimientoMaximo = i;
        }
    } else {
        cout << "Tipo de movimiento inválido, inténtelo de nuevo:" << endl;
        i--;
        continue;
    }

    if(dia == 10) {
        movsDiaDiez++;
    }

    saldo += (float)importe;

  }

    cout << "Saldo final: " << fixed << setprecision(1) << saldo << endl;
    porcentajeDep = (float)cantDepositos / 14.0f * 100.0f;  
    cout << "Porcentaje Depositos: " << porcentajeDep << "%" << endl;
    cout << "Porcentaje Extracciones: " << 100 - porcentajeDep << "%" << endl;
    cout << "Depósito de mayor importe: " << maximo << " dia " << diaMaximo << " movimiento número " << movimientoMaximo << endl;
    cout << "El día 10 se realizaron " << movsDiaDiez << " movimientos.";

  return 0;
}
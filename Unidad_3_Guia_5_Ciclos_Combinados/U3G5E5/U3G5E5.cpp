/*
Un restaurant registró la información de todas las comandas atendidas la noche anterior por sus mozos.

Por cada comanda se registró:

Número de comanda
Número de mozo (entero)
Tipo de plato (1 - Entrada, 2 - Plato Principal, 3 - Postre)
Importe (float)

La información se encuentra agrupada por Número de mozo.
Cada mozo atendió diez comandas.

Para indicar el fin de la carga de datos se registra un Número de mozo negativo.

Calcular e informar:
1 - Por cada mozo, la cantidad de platos de cada tipo.
2 - El número de mozo que haya atendido el Plato Principal de menor importe.
3 - El importe promedio por comanda (entre todas las comandas).

NOTA: Una comanda es un servicio de mesa (pedido) atendido por un mozo en un restaurant.

*/

#include <iostream>
using namespace std;
int main(){
int comanda, mozo, tipo, importe;
int minimoPrincipal, mozoMinimoPrincipal = -1;
int totalImporte = 0, cantComandas = 0;

    cout << "Ingrese el número de mozo  "<< endl;
    
    cin >> mozo;
    while(mozo >= 0) {
        int cantEntradas=0, cantPrincipales=0, cantPostres=0;
        cout << "Ingrese las diez comandas del mozo " << mozo << ":" << endl;
        for(int comanda = 0; comanda < 10; comanda++){
            
            cin >> tipo;
            cin >> importe;

            totalImporte+= importe;
            cantComandas++;

            switch (tipo){
            case 1:
                cantEntradas++;
                break;
            case 2:
                cantPrincipales++;
                 if( mozoMinimoPrincipal == -1 || importe < minimoPrincipal){
                    minimoPrincipal = tipo;
                    mozoMinimoPrincipal = mozo;
                }
                break;
            case 3:
                cantPostres++;
                break;
            }
           
        }

        cout << "Cantidad de Entradas: " << cantEntradas << endl;
        cout << "Cantidad de Principales: " << cantPrincipales << endl;
        cout << "Cantidad de Entradas: " << cantEntradas << endl;


        cout << "Ingrese el número de mozo  "<< endl;
        cin >> mozo;

    }

    int promedioComanda = (float)totalImporte / cantComandas;

//Impresión de resultados
    cout << "Quien atendió el plato principal de menor valor es el mozo : " << mozoMinimoPrincipal << endl;
    cout << "El importe promedio por comanda es: " << promedioComanda << endl; 
    return 0;
}
/*
Una terminal de pago dispone de la información de
los cupones de las transacciones realizadas en el último mes.
Por cada cupón se registra:

-Número de lote (entero)
-Número de cupón (entero)
-Tipo de transacción ('P' - Pago | 'D' - Devolución)
-Importe

La información está agrupada por número de lote.
Para indicar que finaliza un lote y comienza otro
se ingresa un número de cupón igual a cero.

Para indicar que se finaliza la carga de datos
se ingresa un número de lote igual a cero.

Se pide calcular e informar:
Reportar las estadísticas de cada lote con el siguiente formato:

LOTE: XXXX
Cantidad de transacciones: XX
Cantidad de pagos: XX
Cantidad de devoluciones: XX
Total de pagos: $ XXXXX
Total de devoluciones: $ XXXXX

*/

#include <iostream>
using namespace std;
int main(){

int lote, cupon, importe;
char tipo; //('P' - Pago | 'D' - Devolución)
int loteAnterior;
int cantTransacciones = 0, cantPagos = 0, cantDevoluciones = 0, totalPagos = 0, totalDevoluciones = 0;
    cout << "Ingrese los siguientes datos: lote, cupon, tipo, importe: "<< endl;

//Ingreso de datos
    cout << "Lote: ";
    cin >> lote;

    while (lote != 0){

        cout << "Cupon: ";
        cin >> cupon;

        while(cupon != 0){

            cout << "Tipo: ";
            cin >> tipo;
            cout << "Importe: ";
            cin >> importe;

            switch (tipo){
            case 'P':
                cantPagos++;
                totalPagos += importe;
                break;
            case 'D':
                cantDevoluciones++;
                totalDevoluciones += importe;
                break;
            }
            cantTransacciones++;

            cout << "Cupon: ";
            cin >> cupon;
        }


        //Impresión de resultados
        cout << "-------------------------------" << endl;
        cout << "| LOTE:                            |" << endl;
        cout << "| Cantidad de transacciones:       " << cantTransacciones << "|" << endl;
        cout << "| Cantidad de pagos:               " << cantPagos << "|" << endl;
        cout << "| Cantidad de devoluciones :         " << cantDevoluciones << "|" << endl;
        cout << "| Total de pagos :                   " << totalPagos << "|" << endl;
        cout << "| Total de devoluciones :            " << totalDevoluciones << "|" << endl;
        cout << "|                             " << endl << "|";
        cout << " -----------------------------" << endl;
    
        
        cout << "Lote: ";
        cin >> lote;
    }
    



//Proceso
    

    return 0;
}

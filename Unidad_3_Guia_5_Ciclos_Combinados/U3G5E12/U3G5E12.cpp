/*
Una estación de servicio tiene la información de
los despachos realizados el día actual por sus
    7 surtidores.
Por cada despacho registró:

-Número de surtidor (entero)
-Número de despacho (entero)
-Cantidad de litros despachados (float)
-Precio por litro (float)
-Tipo de combustible (1 - Super, 2 - Gasoil, 3 - Diesel)

La información está agrupada por surtidor.
Para indicar el fin de la carga de datos de un surtidor
    se ingresa un número de despacho igual a cero.

Se pide calcular e informar:

A)Por cada surtidor,
el porcentaje de despachos realizados para cada tipo de combustible.

Ejemplo:

SURTIDOR: XX
SUPER: XX.XX %
GASOIL: XX.XX %
DIESEL: XX.XX %

B)Por cada surtidor,
el total facturado en concepto de despachos.

C)La cantidad de surtidores que hayan despachado Super pero no Diesel.
D)La cantidad de despachos que hayan superado los 25 litros. (NOTA MIA-EN TODOS LOS SURTIDORES)
*/

#include <iostream>
using namespace std;
int main(){
    int despacho;
    int siNaftaNoDiesel = 0, despachosMas25 = 0;
    int tipo; //(1 - Super, 2 - Gasoil, 3 - Diesel)
    float litros, precio, totalFacturado = 0.0f;
    cout << "Ingrese los siguientes datos: despacho, litros, precio, tipo, totalFacturado  "<< endl;

    for(int surtidor = 1; surtidor <= 7; surtidor++){
        int cantSuper = 0, cantGasoil = 0, cantDiesel = 0, cantDespachos, porcentajeSuper, porcentajeGasoil, porcentajeDiesel;
        cout << "Surtidor: " << surtidor << ". Ingrese: " << endl;
        cout << "Despacho: ";
        cin >> despacho;
        while(despacho != 0){

            cout << "Litros: ";
            cin >> litros;
            cout << "Precio: ";
            cin >> precio;
            cout << "Tipo: "; //(1 - Super, 2 - Gasoil, 3 - Diesel)
            cin >> tipo;

            //A)
            switch (tipo){
            case 1:
                cantSuper++;
                break;
            case 2:
                cantGasoil++;
                break;
            case 3:
                cantDiesel++;
                break;
            }

            //B)
            totalFacturado += (float)litros * precio;

            //D)
            if(litros > 25) {
                despachosMas25++;
            }


            cin >> despacho;
        }

        //C)
        if(cantSuper > 0 && cantDiesel == 0) {
            siNaftaNoDiesel++;
        }

        //A)
        cantDespachos = cantSuper + cantGasoil + cantDiesel;
        porcentajeSuper = cantSuper * 100 / cantDespachos;
        porcentajeGasoil = cantGasoil * 100 / cantDespachos;
        porcentajeDiesel = cantDiesel * 100 / cantDespachos;

        cout << "SURTIDOR: " << surtidor << endl;
        cout << "SUPER: " << porcentajeSuper << "%" << endl;
        cout << "GASOIL: " << porcentajeGasoil << "%" << endl;
        cout << "DIESEL: " << porcentajeDiesel << "%" << endl;

        //B)
        cout << "TOTAL FACTURADO: " << totalFacturado << endl;


    }

    //C
        cout << "La cantidad de surtidores que despacharon Nafta pero no Diesel fue : " << siNaftaNoDiesel;
    //D
        cout << "La cantidad de despachos de más de 25 litros fue : " << despachosMas25 << endl;

    return 0;
}
/*
Una empresa registró las ventas que efectuó durante un día
y para cada venta registró los siguientes datos:

Número de Artículo Vendido (1 a 30)
Cantidad de Unidades Vendidas
Importe de la Venta

El lote finaliza cuando se ingresa un registro con Número de Artículo igual a 0.
En el lote anterior no aparecen registros de los artículos
que por alguna razón no se hayan vendido durante el día.
Los registros están agrupados por número de artículo. 
Se pide determinar e informar:
La recaudación total para cada uno de los artículos vendidos. Se informa 1 resultado para cada uno de los grupos.
El número de artículo con mayor cantidad TOTAL de unidades vendidas.
*/

#include <iostream>
using namespace std;
int main(){
int articulo = -1, unidadesVendidas, importe, articuloAnterior, maximoUnidades = 0, articuloMaximo;

    cout << "Ingrese los siguientes datos: articulo, unidadesVendidas, importe  "<< endl;

//Ingreso de datos
    cin >> articulo;

    while(articulo != 0){
        articuloAnterior = articulo;
        int totalImporte = 0;
        while(articulo == articuloAnterior){
            cin >> unidadesVendidas;
            cin >> importe;
            //Proceso
            if(unidadesVendidas > 0) {
                totalImporte += importe;
                if(unidadesVendidas > maximoUnidades) {
                    maximoUnidades = unidadesVendidas;
                    articuloMaximo = articulo;
                }
            }
            cin >> articulo;
        }

        cout << "Artículo: " << articuloAnterior << endl << "Recaudación Total: " << totalImporte << endl;

    }

//Impresión de resultados
    cout << "El artículo con más unidades vendidas es el articulo: " << articuloMaximo;

    return 0;
}
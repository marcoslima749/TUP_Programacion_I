/*
La Bolsa de Comercio de la Ciudad de Buenos Aires
brinda la información de la cotización de algunas acciones de la semana pasada.

Por cada acción tiene un registro para cada uno de los  5 días hábiles de la semana pasada,
el mismo contiene:

-Código de acción
-Día de la semana (1 a 5)
-Precio apertura
-Precio cierre
-Volumen de venta

Los datos se encuentran agrupados por código de acción
y dentro de ese agrupamiento, ordenados por día de la semana.

El fin de los datos se indica con un código de acción igual a 0.
Se pide calcular e informar:
Por cada acción,
    -la cantidad de días en que el precio no haya variado. (Igual precio de apertura y cierre).
    -El día de la semana y código de acción que haya registrado el mayor volumen de venta.
*/

#include <iostream>
using namespace std;
int main(){
    int accion, precioApertura, precioCierre, volumenVenta;
    int accionMenorVolumen, diaMenorVolumen = -1, menorVolumen;
    cout << "Ingrese los siguientes datos: accion, precioApertura, precioCierre, volumenVenta "<< endl;

    //Ingreso de datos
    cout << "Accion: ";
    cin >> accion;
    while(accion != 0){
        int cantDiasSinVariaciones = 0;
        for (int dia = 1; dia <= 5; dia++){
            cout << "Día: " << dia << endl;
            cout << "Ingrese: " << endl;
            cout << "precioApertura: ";
            cin >> precioApertura;
            cout << "precioCierre: ";
            cin >> precioCierre;
            cout << "volumenVenta: ";
            cin >> volumenVenta;

            //A)
            if(precioApertura == precioCierre) {
                cantDiasSinVariaciones++;
            }

            //B)
            if(diaMenorVolumen == -1 || volumenVenta < menorVolumen) {
                menorVolumen = volumenVenta;
                diaMenorVolumen = dia;
                accionMenorVolumen = accion;
            }
        }

        //A)
        cout << "La accion " << accion << " tuvo " << cantDiasSinVariaciones << " sin variación." << endl;
        
        //Fin while  
        cout << "Accion: ";
        cin >> accion;

    }

    //Proceso
    

    //Impresión de resultados
    cout << "accionMenorVolumen : " << accionMenorVolumen << endl;
    cout << "diaMenorVolumen : " << diaMenorVolumen << endl;
    return 0;
}

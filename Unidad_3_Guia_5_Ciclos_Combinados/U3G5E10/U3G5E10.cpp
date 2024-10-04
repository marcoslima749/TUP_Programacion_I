/*
Un censo agropecuario recabó información de
10 productores
a lo largo de los últimos 5 años.

Por cada año y productor registró:

- Código de productor
- Número de año (1 a 5)

- Cantidad de nacimientos de cerdos
- Cantidad de nacimientos de ovejas
- Cantidad de nacimientos de vacas


Los datos se encuentran agrupados por código de productor.
Por cada productor, la información está ordenada por año.

Se pide calcular e informar:
A) Por cada productor, la cantidad de años en que no haya producido cerdos.
B) El código de productor que menos animales haya producido en el primer año de trabajo.
C) El porcentaje de cerdos, ovejas y vacas producidos en total entre todos los productores.
*/

#include <iostream>
using namespace std;
int main(){

    int totalCerdos = 0, totalOvejas = 0, totalVacas = 0;
    int minimoPrimerAnio, productorMinimoPrimerAnio = -1;

    cout << "Ingrese los siguientes datos: nacCerdos, nacOvejas, nacVacas  "<< endl;

    for (int productor = 1; productor <= 10; productor++){
        int cantAniosSinCerdos = 0;

        cout << "Productor " << productor << endl;

        for(int anio = 1; anio <= 5; anio++){
            int nacCerdos, nacOvejas, nacVacas;
            cout << "Año: " << anio << endl;
            //Ingreso de datos
            cout << "nacCerdos: ";
            cin >> nacCerdos;
            cout << "nacOvejas: ";
            cin >> nacOvejas;
            cout << "nacVacas: ";
            cin >> nacVacas;

            //A)
            if(nacCerdos == 0){
                cantAniosSinCerdos++;
            }

            //B)
            if(anio == 1){
                int totalAnimales = nacCerdos + nacOvejas + nacVacas;
                if(productorMinimoPrimerAnio == -1 || totalAnimales < minimoPrimerAnio){
                    minimoPrimerAnio = totalAnimales;
                    productorMinimoPrimerAnio = productor;
                }
            }

            //C)
            totalCerdos += nacCerdos;
            totalOvejas += nacOvejas;
            totalVacas += nacVacas;
        }

        //A)
        cout << "Productor " << productor << " cantAniosSinCerdos: " << cantAniosSinCerdos << endl << endl;

    }

    //B)
    cout << "El productor con menos animales en el primer año fue: "  << productorMinimoPrimerAnio << endl;
    
    int totalAnimales = totalCerdos + totalOvejas + totalVacas;
    int porcentajeCerdos = totalCerdos * 100 / totalAnimales;
    int porcentajeOvejas = totalOvejas * 100 / totalAnimales;
    int porcentajeVacas = totalVacas * 100 / totalAnimales;

    //C)
    cout << "porcentajeCerdos : " << porcentajeCerdos << endl;
    cout << "porcentajeOvejas : " << porcentajeOvejas << endl;
    cout << "porcentajeVacas : " << porcentajeVacas << endl;
    return 0;
}

/*
El festival de música Larapalooza dispone de los registros de los 3 días que corresponden al festival del año 2024. Cada uno de los días se presentarán 10 artistas. Por cada uno de ellos se registra la siguiente información:
Día
Número de artista
Cantidad de integrantes
Minutos de show
La información se encuentra agrupada por día. Se pide calcular e informar:
El número de día que mayor cantidad de minutos de show haya registrado en total. Informar también los minutos de dicho día.
Por cada día, el promedio de minutos de show por artista.
El número de artista con mayor cantidad de integrantes. Informar también la cantidad de integrantes y qué día del festival participó. Si hay más de un artista que cumpla esta condición mostrar el primero de ellos.
*/

#include <iostream>
using namespace std;
int main(){
     int diaMasMinutos = -1, maximoMinutos = 0, artistaMasIntegrantes = -1, maximoIntegrantes, diaMasIntegrantes;
    cout << "Ingrese los siguientes datos: integrantes, minutos, , ,   "<< endl;


    for (int dia = 1; dia <= 3; dia++){

    int integrantes, minutos, totalMinutosDia = 0;
        cout << "Día " << dia << endl;
        for (int artista = 1; artista <= 10; artista++){
            cout << "Artista " << artista << endl;
            //Ingreso de datos
            cout << "Ingrese" << endl;

            cout << "Integrantes: ";
            cin >> integrantes;
            cout << "Minutos: ";
            cin >> minutos;

             //A) B)
            totalMinutosDia += minutos;

            //C)
            if(artistaMasIntegrantes == -1 || integrantes > maximoIntegrantes){
                artistaMasIntegrantes = artista;
                maximoIntegrantes = integrantes;
                diaMasIntegrantes = dia;
            }

        }

        //A)
        if(diaMasMinutos == -1 || totalMinutosDia > maximoMinutos){
            maximoMinutos = totalMinutosDia;
            diaMasMinutos = dia;
        }

        //B)
        cout << "El promedio de minutos por artista del día " << dia << " es " << totalMinutosDia / 10 << endl;

        
    }
    
    //A)
    cout << "diaMasMinutos : " << diaMasMinutos << " con " << maximoMinutos << " en total." << endl;
    int prueba = 0;
prueba += 95;
prueba += 135;
prueba += 36;
prueba += 137;
prueba += 130;
prueba += 147;
prueba += 30;
prueba += 110;
prueba += 163;
prueba += 40;

    cout << "prueba " << prueba << endl;

    //C)
    cout << "artistaMasIntegrantes : " << artistaMasIntegrantes << endl;
    cout << "maximoIntegrantes : " << maximoIntegrantes << endl;
    cout << "diaMasIntegrantes : " << diaMasIntegrantes << endl;


    return 0;
}
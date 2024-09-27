/*
Hacer un programa para ingresar los consumos de electricidad de los clientes de una empresa.
Cada registro contiene los siguientes datos: 
- Número de cliente 
- Localidad del cliente (1, 2 o 3) 
- Kilovatios consumidos 

El lote finaliza con un registro con número de cliente igual a cero.
El precio es escalonado según la siguiente escala: 

$ 10 por kilovatio por los primeros 100 kilovatios de consumo.
$ 12 por kilovatio por el consumo de 101 a 200 kilovatios. 
$ 15 por kilovatio por el consumo de 201 kilovatios en adelante. 

Además hay un cargo fijo de $ 100. 
Ejemplo A: Consumo de 55 kilovatios, se calculará: $ 10 x 55 + $ 100= $ 650
Ejemplo B: Consumo de 125 kilovatios, se calculará: $ 10 x 100 + $ 12 x 25 + $ 100=$ 1400 
Ejemplo C: Consumo de 250 kilovatios, se calculará: $10 x 100+ $12 x 100 + $15 x 50 + $100= $ 3050 
Ejemplo D: Consumo de 0 kilovatios, se calculará: $ 10 x 0 + $ 100= $ 100

Se pide determinar e informar: 
a) El número de cliente que tuvo la mayor cantidad de Kilovatios consumidos
para cada una de las 3 localidades.
Se listan 3 resultados, uno para cada una de las 3 localidades 
b) El total de recaudación para cada una de las 3 localidades.
Se listan 3 resultados, uno para cada una de las 3 localidades 
c) El número de cliente que tuvo la menor cantidad de Kilovatios consumidos
excluyendo a los clientes que tuvieron Kilovatios consumidos con valor cero.
Se lista 1 resultado.

*/

#include <iostream>
using namespace std;
int main(){
    int cliente, localidad, consumo;
    int maximoLoc1 = -1, maximoLoc2 = -1, maximoLoc3 = -1, cliMax1, cliMax2, cliMax3;
    int recaudacionLoc1 = 0, recaudacionLoc2 = 0, recaudacionLoc3 = 0;  
    int clienteMinimo, consumoMinimo = -1;
    cout << "Ingrese los datos de registro: N Cliente (entero), Localidad (1-3), kilovatios (entero):" << endl;
    //Ingreso de datos
    cin >> cliente;
    while (cliente != 0){
        cin >> localidad >> consumo;
        //Proceso
        switch (localidad){
        case 1:
            if(maximoLoc1 == -1 || consumo > maximoLoc1){
                maximoLoc1 = consumo;
                cliMax1 = cliente;
            }
            recaudacionLoc1 += 100;
            if(consumo > 200) {
                recaudacionLoc1 += 100 * 10 + 100 * 12 + (consumo - 200) * 15;
             } else if(consumo > 100) {
                recaudacionLoc1 += 100 * 10 + (consumo - 100) * 12;
             } else {
                recaudacionLoc1 += consumo * 10;
             }
            break;
        case 2:
            if(maximoLoc2 == -1 || consumo > maximoLoc2){
                maximoLoc2 = consumo;
                cliMax2 = cliente;
            }
            recaudacionLoc2 += 100;
            if(consumo > 200) {
                recaudacionLoc2 += 100 * 10 + 100 * 12 + (consumo - 200) * 15;
             } else if(consumo > 100) {
                recaudacionLoc2 += 100 * 10 + (consumo - 100) * 12;
             } else {
                recaudacionLoc2 += consumo * 10;
             }
            break;
        case 3:
            if(maximoLoc3 == -1 || consumo > maximoLoc3){
                maximoLoc3 = consumo;
                cliMax3 = cliente;
            }
            recaudacionLoc3 += 100;
            if(consumo > 200) {
                recaudacionLoc3 += 100 * 10 + 100 * 12 + (consumo - 200) * 15;
             } else if(consumo > 100) {
                recaudacionLoc3 += 100 * 10 + (consumo - 100) * 12;
             } else {
                recaudacionLoc3 += consumo * 10;
             }
            break;
        default:
            break;
        }
        if(consumo > 0) {
            if(consumoMinimo == -1 || consumo < consumoMinimo){
                consumoMinimo = consumo;
                clienteMinimo = cliente;
            }
        }

        //Ingreso de datos
        cin >> cliente;
    }
    

    //Proceso

    //Salida

    cout << "Los clientes con mayor consumo fueron: " << endl;
    cout << "Localidad 1: " << cliMax1 << endl;
    cout << "Localidad 2: " << cliMax2 << endl;
    cout << "Localidad 3: " << cliMax3 << endl;
    cout << "La recaudación fue la siguiente:" << endl;
    cout << "Localidad 1: " << recaudacionLoc1 << endl;
    cout << "Localidad 2: " << recaudacionLoc2 << endl;
    cout << "Localidad 3: " << recaudacionLoc3 << endl;
    cout << "El cliente con menos consumo fue el cliente N° " << clienteMinimo << endl;

    return 0;
}


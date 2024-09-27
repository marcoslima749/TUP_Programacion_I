/*
Hacer un programa para ingresar por teclado los saldos de los clientes de un banco.
Cada registro contiene los siguientes datos: 

- Número del cliente 
- Número de sucursal (1, 2, 3 o 4) 
- Saldo del cliente 

El lote finaliza cuando se ingresa un registro con número de sucursal igual a 10.
Se pide determinar e informar. 

a) El número de sucursal con mayor porcentaje de clientes con saldo superior a $ 20000. 
b) El número de cliente con mayor saldo, indicando también de qué número de sucursal es ese cliente.
Se listan 2 resultados. 
c) Para cada una de las sucursales la suma de los saldos de todos sus clientes.
Se listan 4 resultados.

*/

#include <iostream>
using namespace std;
int main(){
    int cliente, sucursal, saldo, sucursalMas20, maximoMas20, saldoMaximo, clienteSaldoMaximo, sucursalClienteSaldoMaximo;
    int saldoSucursal1 = 0, saldoSucursal2 = 0, saldoSucursal3 = 0, saldoSucursal4 = 0;
    int cantClientesSuc1 = 0, cantClientesSuc2 = 0, cantClientesSuc3 = 0, cantClientesSuc4 = 0;
    int cantClientesMas20Suc1 = 0, cantClientesMas20Suc2 = 0, cantClientesMas20Suc3 = 0, cantClientesMas20Suc4 = 0;
    bool primerIngreso = true;

    //Ingreso de datos
    cout << "Ingrese sucursal, cliente, y saldo de la cuenta (enteros): " << endl;
    //Proceso
    cin >> sucursal;
    while (sucursal != 10) {
        cin >> cliente >> saldo;
        switch (sucursal){
        case 1:
            saldoSucursal1 += saldo;
            cantClientesSuc1++;
            if(saldo > 20000) {
                cantClientesMas20Suc1++;
            }
            break;
        case 2:
            saldoSucursal2 += saldo;
            cantClientesSuc2++;
            if(saldo > 20000) {
                cantClientesMas20Suc2++;
            }
            break;
        case 3:
            saldoSucursal3 += saldo;
            cantClientesSuc3++;
            if(saldo > 20000) {
                cantClientesMas20Suc3++;
            }
            break;
        case 4:
            saldoSucursal4 += saldo;
            cantClientesSuc4++;
            if(saldo > 20000) {
                cantClientesMas20Suc4++;
            }
            break;
        
        default:
            break;
        }

        if(primerIngreso || saldo > saldoMaximo) {
            saldoMaximo = saldo;
            clienteSaldoMaximo = cliente;
            sucursalClienteSaldoMaximo = sucursal;
            primerIngreso = false;
        }
        cin >> sucursal;
    }
    
    maximoMas20 =  cantClientesMas20Suc1 * 100 / cantClientesSuc1;
    sucursalMas20 = 1;
    if(cantClientesMas20Suc2 > 0 && (cantClientesMas20Suc2 * 100 / cantClientesSuc2) > maximoMas20) {
        maximoMas20 = cantClientesMas20Suc2 * 100 / cantClientesSuc2;
        sucursalMas20 = 2;
    } else if(cantClientesMas20Suc3 > 0 && (cantClientesMas20Suc3 * 100 / cantClientesSuc3) > maximoMas20) {
        maximoMas20 = cantClientesMas20Suc3 * 100 / cantClientesSuc3;
        sucursalMas20 = 3;
    } else if(cantClientesMas20Suc4 > 0 && (cantClientesMas20Suc4 * 100 / cantClientesSuc4) > maximoMas20) {
        maximoMas20 = cantClientesMas20Suc4 * 100 / cantClientesSuc4;
        sucursalMas20 = 4;
    }


    //Salida
    cout << "La sucursal con mayor \% de clientes con saldo > 20000 es: " << sucursalMas20 << endl;
    cout << "El cliente con mayor saldo es " << clienteSaldoMaximo << " de la sucursal " << sucursalClienteSaldoMaximo << endl;
    cout << "Los saldos de las sucursales son los siguientes: " << endl;
    cout << "Sucursal 1: " << saldoSucursal1 << endl;
    cout << "Sucursal 2: " << saldoSucursal2 << endl;
    cout << "Sucursal 3: " << saldoSucursal3 << endl;
    cout << "Sucursal 4: " << saldoSucursal4 << endl;
    return 0;
}

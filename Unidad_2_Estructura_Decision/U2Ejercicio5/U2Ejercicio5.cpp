/*
------------------
Un negocio de perfumería efectúa descuentos según el importe de la venta.
Si el importe es menor a $100 aplicar un descuento del 5%
Si el importe es entre $100 y hasta $500 aplicar un descuento del 10%
Si el importe es mayor a $500 aplicar un descuento del 15%

Hacer un programa donde se ingresa el importe original sin descuento
y se informe por pantalla el importe con el descuento ya aplicado.
Importante: Verifique que el programa emita UN SOLO CARTEL.
------------------
Datos de Entrada: importeSinDescuento
Datos de Salida: importeConDescuento
*/

#include <iostream>
using namespace std;

int main() {
    float importeSinDescuento, importeConDescuento;
    cout << "Ingrese el importe de la venta:" << endl;
    cin >> importeSinDescuento;
    if(importeSinDescuento < 100) {
        importeConDescuento = importeSinDescuento * 0.95f;
    } else if (importeSinDescuento <= 500) {
        importeConDescuento = importeSinDescuento * 0.90f;
    } else {
        importeConDescuento = importeSinDescuento * 0.85f;
    }

    cout << "El importe final es: " << importeConDescuento;

    return 0;
}


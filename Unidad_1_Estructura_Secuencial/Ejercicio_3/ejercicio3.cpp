#include <iostream>
using namespace std;

int main(){
    int cantidadAutosVendidos, sueldoAPagar;
    int sueldoBasico = 5000;
    int premioPorAuto = 700;
    cout << "Ingrese la cantidad de autos vendidos: " << endl;
    cin >> cantidadAutosVendidos;
    sueldoAPagar  = sueldoBasico + cantidadAutosVendidos * premioPorAuto;
    cout << "El sueldo total a pagar es: " << sueldoAPagar;
 return 0;
}

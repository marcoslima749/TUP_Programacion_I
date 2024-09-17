/*
Hacer un programa para ingresar por teclado las cuatro notas de los exámenes
obtenidas por un alumno
y luego emitir uno solo de los cartel de acuerdo a las siguientes condiciones: 
- “Promociona”, sí obtuvo en los cuatro exámenes nota 7 o más. 
- “Rinde examen final”, si obtuvo nota 4 o más en por lo menos tres exámenes. 
- “Recupera Parciales”, si obtuvo nota 4 o más en por lo menos uno de los exámenes. 
- “Recursa la materia”, si no aprobó ningún examen parcial.
*/

#include <iostream>
using namespace std;
int main() {
    float notaUno, notaDos, notaTres, notaCuatro;
    int sietes = 0, cuatros = 0;
    cout << "Ingrese las cuatro notas obtenidas por el alumno: " << endl;
    cin >> notaUno >> notaDos >> notaTres >> notaCuatro;
    if(notaUno >= 7) {
        sietes++;
    } else if(notaUno >= 4) {
        cuatros++;
    }
    if(notaDos >= 7) {
        sietes++;
    } else if(notaDos >= 4) {
        cuatros++;
    }
    if(notaTres >= 7) {
        sietes++;
    } else if(notaTres >= 4) {
        cuatros++;
    }
    if(notaCuatro >= 7) {
        sietes++;
    } else if(notaCuatro >= 4) {
        cuatros++;
    }

    if(sietes == 4) {
        cout << "Promociona";
    } else if (cuatros == 4) {
        cout << "Rinde examen final";
    } else if (cuatros >= 1) {
        cout << "Recupera Parciales";
    } else {
        cout << "Recursa la materia";
    }
    return 0;
}
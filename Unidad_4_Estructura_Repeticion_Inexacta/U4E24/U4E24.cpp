/*
Se dispone de la información de los exámenes rendidos por algunos estudiantes de la UTN FRGP.
Por cada registro de examen se conoce:

Legajo del estudiante (entero)
Código de materia (entero)
Nota (float)

La finalización de la carga de datos se indica con un legajo de estudiante mayor a 30000.  
Calcular e informar:
La nota promedio entre todos los estudiantes.
El legajo del estudiante con menor nota.
La cantidad de exámenes rendidos para la materia 10.
El porcentaje de aprobados y no aprobados.

NOTA: Un examen se considera aprobado con nota >= 6
NOTA: Si hay varios estudiantes con la menor nota. Informar el primero de ellos
*/
#include <iostream>
using namespace std;
int main(){
    int numLegajo, codMateria, legajoMinimo = -1, cantExamenesMat10 = 0, totalAprobados = 0, totalExamenes = 0, porcentajeAprobados;
    float nota, notaMinima, totalNotas = 0, promedioNotas;

    cout << endl << endl << "Ingrese los datos de los alumnos (Legajo, Codigo de Materia, Nota):" << endl;
    cin >> numLegajo >> codMateria >> nota;
    while(numLegajo <= 30000) {
        if(legajoMinimo == -1 || nota < notaMinima) {
            notaMinima = nota;
            legajoMinimo = numLegajo;
        }
        if(nota >= 6){
            totalAprobados++;
        }
        if(codMateria == 10) {
            cantExamenesMat10++;
        }
        totalNotas+= nota;
        totalExamenes++;

        cin >> numLegajo >> codMateria >> nota;
    }

    promedioNotas = totalNotas / totalExamenes;
    porcentajeAprobados = (float)totalAprobados / totalExamenes * 100;

    cout << "La nota promedio de los estudiantes es: " << promedioNotas << endl;
    cout << "El legajo del estudiante con menor nota es: " << legajoMinimo << endl;
    cout << "La cantidad de exámenes de la materia 10 fue: " << cantExamenesMat10 << endl;
    cout << "El porcentaje de aprobados fue: " << porcentajeAprobados << "%" << endl;
    cout << "El porcentaje de desaprobados fue: " << 100 - porcentajeAprobados << "%" << endl;

    return 0;
}



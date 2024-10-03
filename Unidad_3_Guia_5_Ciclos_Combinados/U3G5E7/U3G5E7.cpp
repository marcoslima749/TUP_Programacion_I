/*
Una universidad registró las inscripciones a las materias de todas sus carreras durante el año anterior.
Para cada inscripción se ingresa:

Legajo de alumno (número no correlativo de cinco cifras). 
Código de carrera (número del 1 al 20)
Código de materia (número del 1 al 60)
Modalidad (“P” si es presencial, “D” si es a distancia)
Horario (“M” para mañana, “T” para tarde, “N” para noche)

El lote finaliza con número de legajo cero y los registros se encuentran agrupados por carrera.

A partir de dichos datos se solicita determinar e informar:

-La cantidad de inscripciones registradas para cada carrera.
-La carrera con más inscripciones a la modalidad Distancia.
-El porcentaje de inscripciones registradas a los distintos horarios teniendo en cuenta el total,
    discriminado por carrera.
-La carrera con menos inscripciones registradas.


*/

#include <iostream>
using namespace std;
int main(){
    //variables de entrada
    int legajo; // (número no correlativo de cinco cifras)
    int carrera, carreraAnterior; //(número del 1 al 20)
    int materia; //(número del 1 al 60)
    char modalidad; //(“P” si es presencial, “D” si es a distancia)
    char horario; // (“M” para mañana, “T” para tarde, “N” para noche)

    int maximoInscripcionesDistancia = 0, carreraMasInscripcionesADistancia, carreraMenosInscripciones = -1,  minimoInscripciones;

    cout << "Ingrese los siguientes datos: legajo, carrera, materia, modalidad, horario  "<< endl;

    //Ingreso de datos
    cin >> legajo;
    while(legajo != 0){
        cin >> carrera;
        carreraAnterior = carrera;
        int cantidadIncripciones = 0, cantidadIncripcionesDistancia = 0, porcentajeManiana, porcentajeTarde, porcentajeNoche ;
        int cantidadManiana = 0, cantidadTarde = 0, cantidadNoche = 0;
        while(carrera == carreraAnterior){
            cantInscripciones++;

            cin >> materia;
            cin >> modalidad;
            cin >> horario;

            if(modalidad == 'D'){
                cantidadIncripcionesDistancia++;
            }

            switch (horario){
            case 'M':
                cantidadManiana++
                break;
            case 'T':
                cantidadTarde++
                break;
            case 'N':
                cantidadNoche++
                break;
            }

            //Fin while carrera
            cin >> legajo;
            if(legajo == 0){
                break;
            }
            cin >> carrera;
        }

        if(cantidadIncripcionesDistancia > maximoInscripcionesDistancia){
            maximoInscripcionesDistancia  = cantidadIncripcionesDistancia;
            carreraMasInscripcionesADistancia = carreraAnterior;
        }

        if(carreraMenosInscripciones == - 1 || cantidadIncripciones < minimoInscripciones) {
            minimoInscripciones = cantidadIncripciones;
            carreraMenosInscripciones = carreraAnterior;
        }
        //a)
        cout << "cantidadIncripciones : " << cantidadIncripciones << endl;

        porcentajeManiana = cantidadManiana * 100 / cantidadIncripciones;
        porcentajeTarde = cantidadTarde * 100 / cantidadIncripciones;
        //La division entera no te da el valor justo porque trunca los decimales
        //para que sume 100% pongo los restos en la última variable
        porcentajeNoche = 100 - porcentajeManiana - porcentajeNoche;

        //c)
        cout << "porcentajeManiana : " << porcentajeManiana << endl;
        cout << "porcentajeTarde : " << porcentajeTarde << endl;
        cout << "porcentajeNoche : " << porcentajeNoche << endl;

        if(legajo == 0){
                break;
        }
        //Fin while legajo
        cin >> legajo;
    }


    //b)
    cout << "carreraMasInscripcionesADistancia : " << carreraMasInscripcionesADistancia << endl;
    //d)
    cout << "carreraMenosInscripciones : " << carreraMenosInscripciones << endl;
    return 0;
}
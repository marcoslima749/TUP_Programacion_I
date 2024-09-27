/*
Un club de lectura desea registrar la información
de los libros que leyeron sus socios en el último mes.

Por cada socio y libro se registró:

Número de socio (entero)
Número de libro (entero)
Cantidad de páginas del libro (entero)
Tiempo total de lectura en minutos (entero)

La información está agrupada por socio.
Cada socio pudo haber leído una cantidad diferente de libros.
Para indicar el fin de la carga de datos de un socio
se ingresa un número de socio distinto al ingresado previamente.
Para indicar el fin de la carga de datos se ingresa un número de socio igual a cero.

Se pide calcular e informar:
Por cada socio, la cantidad total de páginas leídas.
Por cada socio, el tiempo promedio total de lectura.
La cantidad de veces que un socio del club ha leído un libro de más de 500 páginas.
El tiempo total de lectura entre todos los socios.
El socio que más libros haya leído.

*/

#include <iostream>
using namespace std;
int main(){
    int socio, libro, paginas, tiempoDeLectura, socioAnterior, tiempoTotalLecturaClub = 0, maximoLectura = -1, socioMasLector;
    string informe = "";


    cout << "Ingrese los siguientes datos: socio, libro, paginas, tiempoDeLectura  "<< endl;

    //Ingreso de datos
    cin >> socio;
    socioAnterior = socio;

    while(socio != 0){
        int totalPaginasSocio = 0, totalTiempoSocio = 0, tiempoPromedioSocio, cantidadMas500 = 0, cantidadLibros = 0;

        while(socio == socioAnterior){

            cin >> libro;
            cin >> paginas;
            cin >> tiempoDeLectura;

            //Proceso
            totalPaginasSocio+= paginas;
            totalTiempoSocio+= tiempoDeLectura;
            tiempoTotalLecturaClub+= tiempoDeLectura;
            cantidadLibros++;
            if(paginas > 500) {
                cantidadMas500++;
            }

            //Loop
            socioAnterior = socio;
            cin >> socio;
        }

        //Proceso final por socio
        if( maximoLectura == -1 || cantidadLibros > maximoLectura){
            maximoLectura = cantidadLibros;
            socioMasLector = socioAnterior;
        }

        tiempoPromedioSocio = totalTiempoSocio / cantidadLibros;
        informe += "Socio " + to_string(socioAnterior) + ": \n";
        informe += "Cantidad total de Páginas " + to_string(totalPaginasSocio) + ": \n";
        informe += "Tiempo promedio de lectura:  " + to_string(tiempoPromedioSocio) + ": \n";
        informe += "Cantidad de veces que leyó 500+Pág:  " + to_string(cantidadMas500) + ": \n\n";

        socioAnterior = socio;
    }
    

    //Impresión de resultados
    cout << "Los resultados son: " << endl;
    cout << informe << endl;
    cout << "tiempoTotalLecturaClub : " << tiempoTotalLecturaClub << endl;
    cout << "socioMasLector : " << socioMasLector << endl;
    return 0;
}
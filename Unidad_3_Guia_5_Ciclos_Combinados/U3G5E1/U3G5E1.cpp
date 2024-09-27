/*
Un club de lectura desea registrar la información de los 5 libros
que leyeron sus 10 socios en el último mes. Por cada socio y libro se registró:

Número de socio (entero)
Número de libro (entero)
Cantidad de páginas del libro (entero)
Tiempo total de lectura en minutos (entero)

La información está agrupada por socio. Todos los socios leyeron 5 libros.

Se pide calcular e informar:
Por cada socio, la cantidad total de páginas leídas.
Por cada socio, el tiempo promedio total de lectura.
La cantidad de veces que un socio del club ha leído un libro de más de 500 páginas.
El tiempo total de lectura entre todos los socio.

*/

#include <iostream>
using namespace std;
int main(){

    int libro, paginas, tiempo, tiempoTotalLecturaClub = 0;
    string informe = "";
    for(int socio = 1; socio <= 10; socio++) {
        int cantidadPaginasSocio = 0, tiempoPromedioLectura, tiempoTotalLecturaSocio = 0, cantidadLibroMas500 = 0;
    cout << "Ingrese los siguientes datos: libro, paginas, tiempo, del socio " << socio << endl;
    for (int ordenLibro = 0; ordenLibro < 5; ordenLibro++){
    
        //Ingreso de datos
        cin >> libro;
        cin >> paginas;
        cin >> tiempo;

        cantidadPaginasSocio+= paginas;
        tiempoTotalLecturaSocio+= tiempo;
        tiempoTotalLecturaClub+= tiempo;

        if(paginas > 500) {
            cantidadLibroMas500++;
        }
    }

    tiempoPromedioLectura = tiempoTotalLecturaSocio / 5;

    informe += "Socio " + to_string(socio) + ":\nTotal Páginas Leídas: " + to_string(cantidadPaginasSocio) + "\nTiempo Promedio: " + to_string(tiempoPromedioLectura) + "\nVeces que ha leído +500pág: " + to_string(cantidadLibroMas500) + "\n\n";

    }

    informe += "El tiempo total de lectura del club es " + to_string(tiempoTotalLecturaClub) + " minutos.";
    
    cout << endl << informe;
    return 0;
}

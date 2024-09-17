/*
Hacer un programa en el que se ingrese la edad y altura de 5 personas.
Luego, calcular e informar:
La cantidad de personas mayores a 30 años que midan más de 1.8 metros.
El promedio de altura de las personas mayores a 30 años.
La cantidad de personas con altura entre 1.7 y 1.8 (ambos inclusive)
La cantidad de personas cuya edad sea de 20, 30 o 40 años.
*/

#include <iostream>
using namespace std;

int main(){
	int cantAltosMasTreinta = 0, cantMasTreinta = 0, cantAlturaMedia = 0, cantEdadRedonda = 0;
	float totalMasTreinta = 0, promedioMasTreinta = 0;
    int edadUno, edadDos, edadTres, edadCuatro, edadCinco;
    float alturaUno, alturaDos, alturaTres, alturaCuatro, alturaCinco;

	cout <<  "Ingrese la edad y la altura de 5 personas:" << endl;
	cin >> edadUno >> alturaUno;
	if (edadUno>30) {
		cantMasTreinta = cantMasTreinta+1;
		totalMasTreinta = totalMasTreinta+alturaUno;
		if (alturaUno>1.80) {
			cantAltosMasTreinta = cantAltosMasTreinta+1;
        }
    }
	if (alturaUno>=1.70&alturaUno<=1.80) {
		cantAlturaMedia = cantAlturaMedia+1;
    }
	if (edadUno==20|edadUno==30|edadUno==40){
		cantEdadRedonda = cantEdadRedonda+1;
    }

    cin >> edadDos >> alturaDos;
	if (edadDos>30) {
		cantMasTreinta = cantMasTreinta+1;
		totalMasTreinta = totalMasTreinta+alturaDos;
		if (alturaDos>1.80) {
			cantAltosMasTreinta = cantAltosMasTreinta+1;
        }
    }
	if (alturaDos>=1.70&alturaDos<=1.80) {
		cantAlturaMedia = cantAlturaMedia+1;
    }
	if (edadDos==20|edadDos==30|edadDos==40){
		cantEdadRedonda = cantEdadRedonda+1;
    }

    cin >> edadTres >> alturaTres;
	if (edadTres>30) {
		cantMasTreinta = cantMasTreinta+1;
		totalMasTreinta = totalMasTreinta+alturaTres;
		if (alturaTres>1.80) {
			cantAltosMasTreinta = cantAltosMasTreinta+1;
        }
    }
	if (alturaTres>=1.70&alturaTres<=1.80) {
		cantAlturaMedia = cantAlturaMedia+1;
    }
	if (edadTres==20|edadTres==30|edadTres==40){
		cantEdadRedonda = cantEdadRedonda+1;
    }

     cin >> edadCuatro >> alturaCuatro;
	if (edadCuatro>30) {
		cantMasTreinta = cantMasTreinta+1;
		totalMasTreinta = totalMasTreinta+alturaCuatro;
		if (alturaCuatro>1.80) {
			cantAltosMasTreinta = cantAltosMasTreinta+1;
        }
    }
	if (alturaCuatro>=1.70&alturaCuatro<=1.80) {
		cantAlturaMedia = cantAlturaMedia+1;
    }
	if (edadCuatro==20|edadCuatro==30|edadCuatro==40){
		cantEdadRedonda = cantEdadRedonda+1;
    }

    cin >> edadCinco >> alturaCinco;
	if (edadCinco>30) {
		cantMasTreinta = cantMasTreinta+1;
		totalMasTreinta = totalMasTreinta+alturaCinco;
		if (alturaCinco>1.80) {
			cantAltosMasTreinta = cantAltosMasTreinta+1;
        }
    }
	if (alturaCinco>=1.70&alturaCinco<=1.80) {
		cantAlturaMedia = cantAlturaMedia+1;
    }
	if (edadCinco==20|edadCinco==30|edadCinco==40){
		cantEdadRedonda = cantEdadRedonda+1;
    }

	
	promedioMasTreinta = totalMasTreinta/cantMasTreinta;

	cout <<  "La cantidad de personas mayores a 30 años que miden más de 1.80 metros es: " << cantAltosMasTreinta << endl;
	cout <<  "El promedio de altura de las personas mayores a 30 años es: " << promedioMasTreinta << endl;
	cout <<  "La cantidad de personas con altura entre 1.7 y 1.8 es: " << cantAlturaMedia << endl;
	cout <<  "La cantidad de personas cuya edad sea de 20, 30 o 40 años es: " << cantEdadRedonda << endl;

    return 0;
}
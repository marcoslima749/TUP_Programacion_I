/*
Hacer un programa para ingresar por teclado la fecha de nacimiento de una persona,
ingresando día, mes y año como 3 datos individuales.
Luego ingresar la fecha actual ingresando día, mes y año como 3 datos individuales.
Calcular luego la edad en años de esa persona y listar por pantalla.

Ejemplo 1. Si se ingresa como fecha de nacimiento: 3/12/2000 y la fecha actual es 26/2/2019
la edad de esa persona es 18 ya que los 19 recién los cumple en diciembre. 
Ejemplo 2. Si se ingresa como fecha de nacimiento: 3/1/2000 y la fecha actual es 26/2/2019
la edad de esa persona es 19. 
Ejemplo 3. Si se ingresa como fecha de nacimiento: 28/2/2000 y la fecha actual es 26/2/2019
la edad de esa persona es 18 ya que le faltan 2 días para cumplir los 19 años.
*/

#include <iostream>
using namespace std;
int main(){
    int diaNacimiento, mesNacimiento, anioNacimiento, diaHoy, mesHoy, anioHoy, edad;
    cout << "Ingrese su día, mes y año de nacimiento como datos individuales:" << endl;
    cin >> diaNacimiento >> mesNacimiento >> anioNacimiento;
    cout << "Ingrese día, mes y año de hoy, como datos indivicuales:" << endl;
    cin >> diaHoy >> mesHoy >> anioHoy;
    edad = anioHoy - anioNacimiento;
    if(mesHoy < mesNacimiento || mesHoy == mesNacimiento && diaHoy < diaNacimiento) {
        edad = edad - 1;
    }
    cout << "Su edad es: " << edad << " años de edad.";
    return 0;
}
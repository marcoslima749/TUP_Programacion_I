#include "juego.h"
#include <iostream>

using namespace std;

int tirarDado()
{
  return rand() % 6 + 1;
}

void tiradaDeDados(int vDados[], int cantidad)
{
  for(int i=0; i<cantidad; i++)
  {
    vDados[i] = tirarDado();
  }
}

void mostrarDados(int vDados[], int cantidad){
  for(int i=0; i<cantidad; i++)
  {
    cout << " " << vDados[i];
  }

  cout << endl;
}

int calcularPuntaje(int vDados[], int dadosBloqueadores[], int &cantidad){


  int puntos = 0;
  int restar = 0;
  for(int i=0; i<cantidad; i++)
  {
   if(vDados[i] == dadosBloqueadores[0] || vDados[i] == dadosBloqueadores[1]){
    restar+= 1;
   } else {
       puntos+= vDados[i];
   }
  }

  cantidad =  cantidad - restar;




  return puntos;
}


 void jugar(int &puntajeGanador, string &nombreGanador) {

int dadosJuego[5],dadosBloqueadores[2],tirada=0,can=5,resultado[3]{},i,rondas=0,bandera=true;

string nombre;

pedirNombre(nombre);
system("cls");

saludar(nombre);
system ("pause");
system ("cls");





for (i=0;i<3;i++)  {

tiradaDeDados(dadosBloqueadores,2);
 rondas = rondas + 1;
 tirada = 0;
 can = 5;
 bandera = true;



 while(can!=0 && bandera ){

mostrarNombre(nombre);

cout<<endl<<"NUMERO DE RONDA: "<<rondas<<endl;
tiradaDeDados(dadosJuego,can);

tirada = tirada + 1;
cout<<"DADOS BLOQUEADORES"<<endl;
mostrarDados(dadosBloqueadores,2);
cout<<endl<<"TIRADA DE DADOS NUMERO "<< tirada <<endl;
mostrarDados(dadosJuego,can);

if (sonTodosIguales(dadosJuego,can)) {

 resultado[rondas-1]= resultado[rondas-1] + calcularPuntaje(dadosJuego,dadosBloqueadores,can) * 2;
} else {
   resultado[rondas-1]= resultado[rondas-1] + calcularPuntaje(dadosJuego,dadosBloqueadores,can)  ;
}


finDelaPartida(resultado,rondas,can);
cout<<endl<<"PUNTAJE RONDAS "<<endl;
mostratPuntajeDeRonda(resultado,3);
puntajeTotal(resultado,3);


cout<<endl<<"Si quiere seguir tirando presione 1 o si quiere terminar la ronda presione 2: "<<endl;
cin>>bandera;
if (bandera == 2){
    bandera = false;
}


 system("cls");


 }



   }
   //Para estadisticas
   int estadistico=0;
for (i=0; i<3; i++){
    estadistico+=resultado[i];
}
   if (estadistico>puntajeGanador){
    puntajeGanador=estadistico;
    nombreGanador=nombre;
    cout << "Felicidades, ganaste con el mayor puntaje!" << endl;
   }


mostrarNombre(nombre);
puntajeTotal(resultado,3);

 }

void pedirNombre(string &name) {

 cout<<"Por favor ingresar nombre: ";
 cin>>name;

}

void saludar(string name){

    cout << "¡Hola " << name << "! " << "¡Bienvenido!" << endl;
}

void mostrarNombre(string name){

cout<< "Jugador: " << name <<endl;

}

void mostratPuntajeDeRonda(int vec[],int cantidad) {

int i;


for (i=0;i<cantidad;i++){

cout<<"Round "<<i+1<<" :"<<vec[i]<<endl;

}


}

void puntajeTotal(int vec[],int cantidad) {

int i,resultado=0;



for (i=0;i<cantidad;i++){

    resultado = resultado + vec[i];

}
cout << "PUNTAJE TOTAL: " << resultado << endl;

}


void finDelaPartida(int dadosPuntajes[],int cantidadDeRondas, int cantidadDeDados){
 int i;


  if (cantidadDeDados ==0 ) {

    dadosPuntajes[cantidadDeRondas-1]=0;

  }

  }

  bool sonTodosIguales(int vec[],int tam) {

   for (int i = 1; i < tam; i++) {
        if (vec[i] != vec[0]) {
            return false;
        }
    }
    return true;

  }

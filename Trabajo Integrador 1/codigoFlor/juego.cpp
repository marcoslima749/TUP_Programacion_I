#include <iostream>
#include <ctime>
#include <string>


using namespace std;

int tirarDado();
void tiradaDeDados(int vDados[], int cantidad);
void mostrarDados(int vDados[], int cantidad);
int calcularPuntaje(int vDados[], int dadosBloqueadores[], int &cantidad);
int jugar(int puntaje,string nombre, int resultados[],int totalrondas);
string pedirNombre(string &name);
void mostrarNombre(string &name);
void mostratPuntajeDeRonda(int vec[],int cantidad);
void puntajeTotal(int vec[],int cantidad);
void finDelaPartida(int dadosPuntajes[],int cantidadDeRondas, int cantidadDeDados);
bool sonTodosIguales(int vec[],int tam);
void puntajeparcial(int lista1[],int lista2[], int cantidad,string nombre1,string nombre2);

//------------------------------------------------------------------------------------------------------------------------

int main()
{

  srand(time(0));
int modoJugador,puntaje;
string nombre;

cout<<"Ingrese modo de juego \n"<<"1 JUGADOR: PRESIONE 1 \n"<<"2 JUGADORES: PRESIONE 2"<<endl;
cin>>modoJugador;

//MODO 1 JUGADOR

if (modoJugador==1){

int puntos[3]{},rondas=1,i;

nombre=pedirNombre(nombre);

for (i=0;i<3;i++){

  int pausa=0;

   puntos[rondas-1]=jugar(puntaje,nombre,puntos,rondas);
   rondas = rondas + 1;
   puntajeparcial(puntos,0,3,nombre,"0");
   cout<<"Presione 1 para continuar"<<endl;
   cin>> pausa;


}

 }

 //MODO 2 JUGADORES
 else{

string jugador1, jugador2;

int rondas=1,i ;
int puntos1,listapuntos1[3]{};
int puntos2,listapuntos2[3]{};


jugador1=pedirNombre(jugador1);
jugador2=pedirNombre(jugador2);

for (i=0;i<3;i++){
 int pausa=0;


 //JUGADOR 1
 listapuntos1[rondas-1]=jugar(puntaje,jugador1,listapuntos1,rondas);
 puntajeparcial(listapuntos1,listapuntos2,3,jugador1,jugador2);

 cout<<"Presione 1 para continuar"<<endl;
 cin>> pausa;



//JUGADOR 2
 listapuntos2[rondas-1]=jugar(puntaje,jugador2,listapuntos2,rondas);

 puntajeparcial(listapuntos1,listapuntos2,3,jugador1,jugador2);

 cout<<"Presione 1 para continuar"<<endl;
 cin>> pausa;
 rondas = rondas + 1;



 }
 }









  return 0;
}

//--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

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

//--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

void mostrarDados(int vDados[], int cantidad){
  for(int i=0; i<cantidad; i++)
  {
    cout << " " << vDados[i];
  }

  cout << endl;
}

//--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

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


int jugar(int puntaje,string nombre,int resultado[],int totalrondas) {

int dadosJuego[5],dadosBloqueadores[2],tirada=0,can=5,i,rondas=0,bandera=true;


system("cls");




 rondas = rondas + 1;
 tirada = 0;
 can = 5;
 bandera = true;


tiradaDeDados(dadosBloqueadores,2);


 while(can!=0 && bandera ){

mostrarNombre(nombre);
cout<<"Numero de rondas  "<<totalrondas<<endl;
tiradaDeDados(dadosJuego,can);

tirada = tirada + 1;
cout<<"DADOS BLOQUEADORES"<<endl;
mostrarDados(dadosBloqueadores,2);
cout<<"TIRADA DE DADOS NUMERO "<< tirada <<endl;
mostrarDados(dadosJuego,can);

if (can==0){
    bandera = false;
}

//DETECTA SI LOS DADOS SON IGUALES PARA DUPLICAR DADOS
if (sonTodosIguales(dadosJuego,can)&& can>1) {

 resultado[totalrondas-1]= resultado[totalrondas-1] + calcularPuntaje(dadosJuego,dadosBloqueadores,can) * 2;
    finDelaPartida(resultado,totalrondas,can);
    cout<<"Puntaje ronda  "<<totalrondas<<endl;
    mostratPuntajeDeRonda(resultado,totalrondas);
    puntajeTotal(resultado,totalrondas);
    puntaje=resultado[totalrondas-1];

  while(bandera!= 1){
    cout<<"Debe volver a tirar PRESIONE 1"<<endl;
    cin>>bandera;}


    bandera = true;
}


else {
   resultado[totalrondas-1]= resultado[totalrondas-1] + calcularPuntaje(dadosJuego,dadosBloqueadores,can)  ;

    finDelaPartida(resultado,totalrondas,can);
    cout<<"Puntaje ronda  "<<totalrondas<<endl;
    mostratPuntajeDeRonda(resultado,totalrondas);
    puntajeTotal(resultado,totalrondas);
    puntaje=resultado[totalrondas-1];


cout<<"Si quiere seguir tirando presione 1 o si quiero terminar la ronda presion 2"<<endl;
cin>>bandera;
if (bandera == 2){
    bandera = false;


}

}

 system("cls");

 }





return puntaje;
 }

//--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------


string pedirNombre(string &name) {

 cout<<"Por favor ingresar nombre"<<endl;
 cin>>name;

return name;

}
//--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------


void mostrarNombre(string &name){

cout<<"Hola "<<name<<",es timeeee!"<<endl;

}

//--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------


void mostratPuntajeDeRonda(int vec[],int cantidad) {

int i;


for (i=0;i<cantidad;i++){

cout<<"Round "<<i+1<<" :"<<vec[i]<<endl;

}


}

//--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

void puntajeTotal(int vec[],int cantidad) {

int i,resultado=0;



for (i=0;i<cantidad;i++){

    resultado = resultado + vec[i];

}

cout<<"Puntaje total "<<resultado<<endl;

}

//--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

void finDelaPartida(int dadosPuntajes[],int cantidadDeRondas, int cantidadDeDados){
 int i;


  if (cantidadDeDados ==0 ) {

    dadosPuntajes[cantidadDeRondas-1]=0;

  }

  }

//--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

  bool sonTodosIguales(int vec[],int tam) {

   for (int i = 1; i < tam; i++) {
        if (vec[i] != vec[0]) {
            return false;
        }
    }
    return true;

  }

//--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

  void puntajeparcial(int lista1[],int lista2[], int cantidad,string nombre1,string nombre2){
  int acum1=0;
  int acum2=0;

  cout<<nombre1<<": ";
  for(int i=0; i<cantidad; i++)
  {
    cout << " " << lista1[i];
    acum1+=lista1[i];

  }
  cout<<" = "<<acum1;
  cout << endl;

 if (nombre2!= "0"){
  cout<<nombre2<<": ";
   for(int i=0; i<cantidad; i++)
  {
    cout << " " << lista2[i];
    acum2+=lista2[i];

  }
  cout<<" = "<<acum2;
  cout << endl;
  }
}
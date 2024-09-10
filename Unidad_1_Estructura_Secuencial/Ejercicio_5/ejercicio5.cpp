#include <iostream>
using namespace std;

int main(){
    float a, b, c, pa, pb, pc;
    int total;

	cout << "Ingresar la cantidad de alfajores A vendidos:";
	cin >> a;
	cout << "Ingresar la cantidad de alfajores B vendidos:";
	cin >> b;
	cout << "Ingresar la cantidad de alfajores C vendidos:";
	cin >> c;
	total = a + b + c;
	pa = a / total * 100;
	pb = b / total * 100;
	pc = c / total * 100;
	cout << "El porcentaje de alfajores a vendidos es: " << endl;
	cout << pa << endl;
	cout << "El porcentaje de alfajores b vendidos es:" << endl;
	cout << pb << endl;
	cout << "El porcentaje de alfajores c vendidos es:" << endl;
	cout << pc;


 return 0;
}

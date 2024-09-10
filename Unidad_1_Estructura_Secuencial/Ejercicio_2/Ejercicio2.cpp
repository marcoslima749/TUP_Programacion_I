#include <iostream>
using namespace std;

int main(){
float a, b, c;
cout << "Ingrese el primer numero: " << endl;
cin >> a;
cout << "Ingrese el segundo numero: " << endl;
cin >> b;
c = a;
a = b;
b = c;
cout << "El primer número es: " << a << endl;
cout << "El segundo número es: " << b << endl;
return 0;
}
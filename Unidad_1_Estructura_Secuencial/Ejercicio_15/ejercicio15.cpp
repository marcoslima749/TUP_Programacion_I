	/*
    La amplitud térmica es la diferencia entre la temperatura máxima
    y la temperatura mínima en una zona y tiempo determinado.
    Dada la temperatura máxima y la temperatura mínima de San Fernando de ayer,
    calcular y mostrar la amplitud térmica.
    NOTA: El usuario ingresará como temperatura máxima un valor mayor o igual
    al de la temperatura mínima.
    */
    
    #include <iostream>
    using namespace std;
    
    int main(){
    float maxima, minima, amplitud;

    cout << "Ingrese la temperatura máxima de San Fernando de ayer: ";
	cin >> maxima;
	cout << "Ingrese la temperatura mínima de San Fernando de ayer: ";
	cin >> minima;
	amplitud = maxima - minima;
	cout << "La amplitud térmica de San Fernando ayer fue de: " << amplitud;

    return 0;
    }
    
    
    
    

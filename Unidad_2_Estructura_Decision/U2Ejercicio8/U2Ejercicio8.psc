Algoritmo U2Ejercicio8
	Escribir 'Ingrese las longitudes de los tres lados de un tri�ngulo:'
	Leer ladoUno
	Leer ladoDos
	Leer ladoTres
	Si ladoUno==ladoDos|ladoUno==ladoTres Entonces
		Si ladoDos==ladoTres Entonces
			Escribir 'Es un tri�ngulo equil�tero.'
		SiNo
			Escribir 'Es un tri�ngulo is�sceles.'
		FinSi
	SiNo
		Escribir 'Es un tri�ngulo escaleno.'
	FinSi
FinAlgoritmo

Algoritmo U2Ejercicio8
	Escribir 'Ingrese las longitudes de los tres lados de un triángulo:'
	Leer ladoUno
	Leer ladoDos
	Leer ladoTres
	Si ladoUno==ladoDos|ladoUno==ladoTres Entonces
		Si ladoDos==ladoTres Entonces
			Escribir 'Es un triángulo equilátero.'
		SiNo
			Escribir 'Es un triángulo isósceles.'
		FinSi
	SiNo
		Escribir 'Es un triángulo escaleno.'
	FinSi
FinAlgoritmo

Algoritmo U2Ejercicio9
	Escribir 'Ingrese tres n�meros para determinar el m�ximo:'
	Leer numeroUno
	Leer numeroDos
	Leer numeroTres
	Si numeroUno>numeroDos Entonces
		Si numeroUno>numeroTres Entonces
			Escribir 'El m�ximo es: ',numeroUno
		SiNo
			Escribir 'El m�ximo es: ',numeroTres
		FinSi
	SiNo
		Si numeroDos>numeroTres Entonces
			Escribir 'El m�ximo es: ',numeroDos
		SiNo
			Escribir 'El m�ximo es: ',numeroTres
		FinSi
	FinSi
FinAlgoritmo

Algoritmo U2Ejercicio9
	Escribir 'Ingrese tres números para determinar el máximo:'
	Leer numeroUno
	Leer numeroDos
	Leer numeroTres
	Si numeroUno>numeroDos Entonces
		Si numeroUno>numeroTres Entonces
			Escribir 'El máximo es: ',numeroUno
		SiNo
			Escribir 'El máximo es: ',numeroTres
		FinSi
	SiNo
		Si numeroDos>numeroTres Entonces
			Escribir 'El máximo es: ',numeroDos
		SiNo
			Escribir 'El máximo es: ',numeroTres
		FinSi
	FinSi
FinAlgoritmo

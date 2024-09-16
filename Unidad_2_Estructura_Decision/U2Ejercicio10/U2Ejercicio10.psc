Algoritmo U2Ejercicio10
	Escribir "Ingrese 5 números para determinar el máximo: "
	Leer numeroUno, numeroDos, numeroTres, numeroCuatro, numeroCinco
	Si numeroUno > numeroDos Entonces
		maximo = numeroUno
	SiNo
		maximo = numeroDos
	FinSi
	Si numeroTres > maximo Entonces
		maximo = numeroTres
	FinSi
	Si numeroCuatro > maximo Entonces
		maximo = numeroCuatro
	FinSi
	Si numeroCinco > maximo Entonces
		maximo = numeroCinco
	FinSi
	Escribir "El máximo es: ", maximo
FinAlgoritmo

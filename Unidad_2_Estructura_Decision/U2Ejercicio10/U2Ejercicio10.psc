Algoritmo U2Ejercicio10
	Escribir "Ingrese 5 n�meros para determinar el m�ximo: "
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
	Escribir "El m�ximo es: ", maximo
FinAlgoritmo

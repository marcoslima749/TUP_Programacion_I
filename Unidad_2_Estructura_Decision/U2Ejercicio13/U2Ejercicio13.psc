Algoritmo U2Ejercicio13
	Escribir "Ingrese tres números distintos para ordernarlos: "
	Leer numeroUno, numeroDos, numeroTres
	Si numeroUno < numeroDos Entonces
		Si numeroDos < numeroTres Entonces
			menor = numeroUno; medio = numeroDos; mayor = numeroTres
		SiNo
			Si numeroUno < numeroTres Entonces
				menor = numeroUno; medio = numeroTres; mayor = numeroDos
			SiNo
				menor = numeroTres; medio = numeroUno; mayor = numeroDos
			FinSi
		FinSi
	SiNo
		Si numeroDos < numeroTres Entonces
			Si numeroUno < numeroTres Entonces
				menor = numeroDos; medio = numeroUno; mayor = numeroTres
			SiNo
				menor = numeroDos; medio = numeroTres; mayor = numeroUno
			FinSi
		SiNo
			menor = numeroTres; medio = numeroDos; mayor = numeroUno
		FinSi
	FinSi
	Escribir "Los números ordenados son: "
	Escribir menor
	Escribir medio
	Escribir mayor
FinAlgoritmo

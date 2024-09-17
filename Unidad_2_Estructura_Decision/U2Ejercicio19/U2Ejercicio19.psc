Algoritmo U2Ejercicio19
	Escribir "Ingrese la cantidad de horas necesarias, sin decimales: "
	definir horas como entero
	Leer horas
	Escribir "Ingrese el lenguaje a utilizar, siendo 1 para C/C++, 2 para C#, 3, para Python, y 4 para Go: "
	definir lenguaje como entero
	Leer lenguaje
	definir urgente como logico
	Escribir "Ingrese 1 si el trabajo es urgente, o 0, si no lo es:"
	Leer urgente
	// 'C' == 67 '#' == 35 'P' == 80 'G' == 71
	Segun lenguaje Hacer
		1:
			totalAPagar =  7500 * horas
		2:
			totalAPagar =  6100 * horas
		3:
			totalAPagar =  5400 * horas
		4:
			totalAPagar =  5000 * horas
	FinSegun
	Si urgente Entonces
		totalAPagar = totalAPagar * 2.20
	FinSi
	Escribir "El total a pagar es: $", totalAPagar, "."
FinAlgoritmo

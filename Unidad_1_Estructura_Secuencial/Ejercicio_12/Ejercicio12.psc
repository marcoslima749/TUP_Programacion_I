Algoritmo Ejercicio12
	Escribir "Ingrese la cantidad de huevos:"
	Leer huevos
	huevosRestantes = huevos % 12
	maples = (huevos - huevosRestantes) / 12
	totalAPagar = (maples * 1000) + (huevosRestantes * 120)
	Escribir "El total a pagar es: ", totalAPagar
FinAlgoritmo

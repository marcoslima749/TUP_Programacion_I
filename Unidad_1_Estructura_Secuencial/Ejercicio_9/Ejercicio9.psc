Algoritmo Ejercicio9
	Escribir "Ingrese la cantidad de minutos:"
	Leer minutos
	minutosRestantes = minutos % 60
	horas = (minutos - minutosRestantes) / 60
	Escribir minutos, " minutos equivalen a ", horas, " horas y ", minutosRestantes, " minutos."
FinAlgoritmo

Algoritmo Ejercicio11
	Escribir 'Ingrese la cantidad de minutos:'
	Leer minutos
	minutosRestantes = minutos%60
	horas = (minutos-minutosRestantes)/60
	horasRestantes = horas%24
	dias = (horas-horasRestantes)/24
	Escribir minutos,' minuto/s equivale/n a ',dias,' dia/s ',horasRestantes,' hora/s y ',minutosRestantes,' minuto/s.'
FinAlgoritmo

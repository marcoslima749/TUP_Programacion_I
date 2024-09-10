Algoritmo Ejercicio16
	pildoras = 75; betamol = 45; micilina = 2; sinitico = 7 
	Escribir "Ingrese la cantidad de frascos:"
	Leer frascos
	totalPildoras = frascos * pildoras
	totalBetamol = totalPildoras * betamol
	totalMicilina = totalPildoras * micilina * 1000
	totalSinitico = totalPildoras * sinitico
	Escribir "Las cantidades necesarias para elaborar el pedido son:"
	Escribir "Betamol: ", totalBetamol, " mg"
	Escribir "Micilina: ", totalMicilina, " mg"
	Escribir "Ácido Sinítico: ", totalSinitico, " mg"
FinAlgoritmo

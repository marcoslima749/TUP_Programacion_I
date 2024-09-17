Algoritmo U2Ejercicio23
	Escribir "Ingrese el número de mes para saber a qué bimestre corresponde: "
	definir mes como entero
	definir bimestre como entero
	Leer mes
	Si mes % 2 == 0 Entonces
		bimestre = mes / 2
	SiNo
		bimestre = (mes - mes % 2) / 2 + 1
	FinSi
	Escribir "El número pertenece al bimestre: ", bimestre
FinAlgoritmo

Algoritmo U2Ejercicio24
		Escribir "Ingrese el n�mero de mes para saber a qu� trimestre corresponde: "
		definir mes como entero
		definir trimestre como entero
		Leer mes
		Si mes % 3 == 0 Entonces
			trimestre = mes / 3
		SiNo
			trimestre = (mes - mes % 3) / 3 + 1
		FinSi
		Escribir "El n�mero pertenece al trimestre: ", trimestre
FinAlgoritmo



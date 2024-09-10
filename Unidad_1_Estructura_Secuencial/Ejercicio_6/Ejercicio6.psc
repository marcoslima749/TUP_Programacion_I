Algoritmo Ejercicio6
	Escribir "Ingrese la recaudación de la primera semana:"
	Leer primeraSemana
	Escribir "Ingrese la recaudación de la segunda semana:"
	Leer segundaSemana
	Escribir "Ingrese la recaudación de la tercera semana:"
	Leer terceraSemana
	Escribir "Ingrese la recaudación de la cuarta semana:"
	Leer cuartaSemana
	total = primeraSemana + segundaSemana + terceraSemana + cuartaSemana
	promedio = total / 4
	pprimeraSemana = primeraSemana / total * 100
	psegundaSemana = segundaSemana / total * 100
	pterceraSemana = terceraSemana / total * 100
	pcuartaSemana = cuartaSemana / total * 100
	Escribir "La recaudación promedio es: "
	Escribir promedio
	Escribir "Los porcentajes de recaudación por semana son:"
	Escribir "Primera semana: ", pprimeraSemana
	Escribir "Segunda semana: ", psegundaSemana
	Escribir "Tercera semana: ", pterceraSemana
	Escribir "Cuarta semana: ", pcuartaSemana	
FinAlgoritmo

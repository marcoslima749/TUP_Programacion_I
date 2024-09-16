Algoritmo U2Ejercicio15
	Escribir "Ingrese el año para saber si es bisiesto:"
	Leer anio
	Si anio % 4 == 0 Entonces
		Si anio % 100 == 0 & anio % 400 <> 0 Entonces
			Escribir "El año ", anio, " no es bisiesto."
		SiNo
			Escribir "El año ", anio, " es bisiesto."
		FinSi
	SiNo
		Escribir "El año ", anio, " no es bisiesto."
	FinSi
FinAlgoritmo

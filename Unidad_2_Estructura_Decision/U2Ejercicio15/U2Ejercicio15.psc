Algoritmo U2Ejercicio15
	Escribir "Ingrese el a�o para saber si es bisiesto:"
	Leer anio
	Si anio % 4 == 0 Entonces
		Si anio % 100 == 0 & anio % 400 <> 0 Entonces
			Escribir "El a�o ", anio, " no es bisiesto."
		SiNo
			Escribir "El a�o ", anio, " es bisiesto."
		FinSi
	SiNo
		Escribir "El a�o ", anio, " no es bisiesto."
	FinSi
FinAlgoritmo

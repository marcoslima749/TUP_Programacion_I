Algoritmo U2Ejercicio14
	Escribir "Ingrese su d�a, mes y a�o de nacimiento como datos individuales:"
	Leer diaNacimiento, mesNacimiento, anioNacimiento
	Escribir "Ingrese d�a, mes y a�o de hoy, como datos indivicuales:"
	Leer diaHoy, mesHoy, anioHoy
	edad = anioHoy - anioNacimiento
	Si mesHoy < mesNacimiento | mesHoy == mesNacimiento & diaHoy < diaNacimiento Entonces
		edad = edad - 1
	FinSi
	Escribir "Su edad es: ", edad, " a�os de edad."
FinAlgoritmo

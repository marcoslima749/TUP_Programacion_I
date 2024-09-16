Algoritmo U2Ejercicio14
	Escribir "Ingrese su día, mes y año de nacimiento como datos individuales:"
	Leer diaNacimiento, mesNacimiento, anioNacimiento
	Escribir "Ingrese día, mes y año de hoy, como datos indivicuales:"
	Leer diaHoy, mesHoy, anioHoy
	edad = anioHoy - anioNacimiento
	Si mesHoy < mesNacimiento | mesHoy == mesNacimiento & diaHoy < diaNacimiento Entonces
		edad = edad - 1
	FinSi
	Escribir "Su edad es: ", edad, " años de edad."
FinAlgoritmo

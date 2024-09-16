Algoritmo U4Ejercicio16
	Escribir "Ingrese una serie de números para conocer el máximo. Cuando hay ingresado todos los números repita el último dígito para conocer el resultado: "
	Leer n
	maximo = n
	anterior = n
	esIgual = Falso
	Repetir
		Leer n
		Si n == anterior Entonces
			esIgual = Verdadero
		SiNo
			Si n > maximo Entonces
				maximo = n
			FinSi
			anterior = n
		FinSi
	Mientras Que esIgual == Falso
	Escribir "El máximo es: ", maximo
FinAlgoritmo

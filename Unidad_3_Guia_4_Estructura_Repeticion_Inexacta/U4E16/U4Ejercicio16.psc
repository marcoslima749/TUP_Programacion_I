


Algoritmo U4Ejercicio16
	Escribir "Ingrese una serie de n�meros para conocer el m�ximo. Cuando hay ingresado todos los n�meros repita el �ltimo d�gito para conocer el resultado: "
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
	Escribir "El m�ximo es: ", maximo
FinAlgoritmo

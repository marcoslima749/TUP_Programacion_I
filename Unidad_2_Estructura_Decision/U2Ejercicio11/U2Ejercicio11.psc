Algoritmo U2Ejercicio11
	positivos = 0;  negativos = 0; ceros = 0
	Escribir "Ingrese 5 números para conocer cuántos son positivos, negativos, y cero: "
	Leer numeroUno, numeroDos, numeroTres, numeroCuatro, numeroCinco
	Si numeroUno > 0 Entonces
		positivos = positivos + 1
	SiNo
		Si numeroUno < 0 Entonces
			negativos = negativos + 1
		SiNo
			ceros = ceros + 1
		FinSi
	FinSi
	Si numeroDos > 0 Entonces
		positivos = positivos + 1
	SiNo
		Si numeroDoS < 0 Entonces
			negativos  = negativos + 1
		SiNo
			ceros = ceros + 1
		FinSi
	FinSi
	Si numeroTres > 0 Entonces
		positivos = positivos + 1
	SiNo
		Si numeroTres < 0 Entonces
			negativos = negativos + 1
		SiNo
			ceros = ceros + 1
		FinSi
	FinSi
	Si numeroCuatro > 0 Entonces
		positivos = positivos + 1
	SiNo
		Si numeroCuatro < 0 Entonces
			negativos = negativos + 1
		SiNo
			ceros = ceros + 1
		FinSi
	FinSi
	Si numeroCinco > 0 Entonces
		positivos = positivos + 1
	SiNo
		Si numeroCinco < 0 Entonces
			negativos = negativos + 1
		SiNo
			ceros = ceros + 1
		FinSi
	FinSi
	Escribir "La cantidad de números postivos es: ", positivos
	Escribir "La cantidad de números negativos es: ", negativos
	Escribir "La cantidad de números cero es: ", ceros
FinAlgoritmo

Algoritmo U2Ejercicio18
	Escribir "Ingrese al cantidad de kilovatios consumidos: "
	Leer kilovatios
	totalAPagar = 0
	Si kilovatios > 100 Entonces
		totalAPagar = 100 * 10
		excedente = kilovatios - 100
		Si excedente > 100 Entonces
			totalAPagar = totalAPagar + 100 * 12
			excedente = excedente - 100
			
				totalAPagar = totalAPagar + excedente * 15
			
		SiNo
			totalAPagar = totalAPagar +  excedente * 12
		FinSi
	SiNo
		totalAPagar = kilovatios * 10
	FinSi
	Escribir "El total a pagar es: $", totalAPagar, "."
FinAlgoritmo

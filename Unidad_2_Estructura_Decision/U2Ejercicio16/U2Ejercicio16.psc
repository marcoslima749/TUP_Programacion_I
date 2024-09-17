Algoritmo U2Ejercicio16
	sietes = 0; cuatros = 0
	Escribir 'Ingrese las cuatro notas obtenidas por el alumno:'
	Leer notaUno,notaDos,notaTres,notaCuatro
	Si notaUno>=7 Entonces
		sietes = sietes+1
	SiNo
		Si notaUno>=4 Entonces
			cuatros = cuatros+1
		FinSi
	FinSi
	Si notaDos>=7 Entonces
		sietes = sietes+1
	SiNo
		Si notaDos>=4 Entonces
			cuatros = cuatros+1
		FinSi
	FinSi
	Si notaTres>=7 Entonces
		sietes = sietes+1
	SiNo
		Si notaTres>=4 Entonces
			cuatros = cuatros+1
		FinSi
	FinSi
	Si notaCuatro>=7 Entonces
		sietes = sietes+1
	SiNo
		Si notaCuatro>=4 Entonces
			cuatros = cuatros+1
		FinSi
	FinSi
	Si sietes==4 Entonces
		Escribir "Promociona"
	SiNo
		Si cuatros==4 Entonces
			Escribir "Rinde examen final"
		SiNo
			Si cuatros>=1 Entonces
				Escribir "Recupera Parciales"
			SiNo
				Escribir "Recursa la materia"
			FinSi
		FinSi
	FinSi
	Escribir mensaje
FinAlgoritmo

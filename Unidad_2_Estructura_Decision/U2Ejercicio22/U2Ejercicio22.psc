Algoritmo U2Ejercicio22
	alquiler = 10000
	costoCaramelo = 2.50
	costoMantenimiento = 5000/100
	Escribir 'Ingrese el presupuesto inicial y la cantidad de caramelos a producir: '
	Leer presupuesto,caramelos
	costoTotal = alquiler+costoCaramelo*caramelos+costoMantenimiento*caramelos
	Si costoTotal<presupuesto Entonces
		Escribir 'El presupuesto es suficiente para cubrir los costos de $',costoTotal
	SiNo
		Escribir 'El presupuesto no es suficiente, necesita un crédito de $', costoTotal - presupuesto
	FinSi
FinAlgoritmo

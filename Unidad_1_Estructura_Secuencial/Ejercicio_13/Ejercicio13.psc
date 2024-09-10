Algoritmo Ejercicio13
	Escribir 'Ingrese el importe a retirar (en múltiplos de 100):'
	Leer importe
	restoMil = importe%1000
	mil = (importe-restoMil)/1000
	restoQuinientos = restoMil%500
	quinientos = (restoMil-restoQuinientos)/500
	restoDoscientos = restoQuinientos%200
	doscientos = (restoQuinientos-restoDoscientos)/200
	restoCien = restoDoscientos%100
	cien = (restoDoscientos-restoCien)/100
	Escribir 'Se entregaran:'
	Escribir mil,' billete/s de $1000'
	Escribir quinientos,' billete/s de $500'
	Escribir doscientos,' billete/s de $200'
	Escribir cien,' billete/s de $100'
FinAlgoritmo

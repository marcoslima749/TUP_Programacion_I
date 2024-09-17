Algoritmo U2Ejercicio21
	Escribir 'Ingrese una venta, indicando: '
	Escribir 'Cantidad de carteras'
	Escribir 'Tipo de cartera (1 - Blanco, 2 - Negro, 3- Marrón, 4 - Gris)'
	blancas = 45
	negras = 50
	marrones = 40
	grises = 49
	totalVentas = 0
	Leer cantidadUno,tipoUno
	totalVentas = totalVentas+cantidadUno
	Segun tipoUno  Hacer
		1:
			blancas = blancas-cantidadUno
		2:
			negras = negras-cantidadUno
		3:
			marrones = marrones-cantidadUno
		4:
			grises = grises-cantidadUno
	FinSegun
	Leer cantidadDos,tipoDos
	totalVentas = totalVentas+cantidadDos
	Segun tipoDos  Hacer
		1:
			blancas = blancas-cantidadDos
		2:
			negras = negras-cantidadDos
		3:
			marrones = marrones-cantidadDos
		4:
			grises = grises-cantidadDos
	FinSegun
	Leer cantidadTres,tipoTres
	totalVentas = totalVentas+cantidadTres
	Segun tipoTres  Hacer
		1:
			blancas = blancas-cantidadTres
		2:
			negras = negras-cantidadTres
		3:
			marrones = marrones-cantidadTres
		4:
			grises = grises-cantidadTres
	FinSegun
	Escribir 'Cantidad total de carteras vendidas es: ',totalVentas
	Escribir 'El stock actual es: '
	Escribir blancas,' carteras blancas.'
	Escribir negras,' carteras negras.'
	Escribir marrones,' carteras marrones.'
	Escribir grises,' carteras grises.'
	Si blancas==45 Entonces
		Escribir 'No se vendieron carteras blancas.'
	FinSi
	Si negras==50 Entonces
		Escribir 'No se vendieron carteras negras.'
	FinSi
	Si marrones==40 Entonces
		Escribir 'No se vendieron carteras marrones.'
	FinSi
	Si grises==49 Entonces
		Escribir 'No se vendieron carteras grises.'
	FinSi
FinAlgoritmo

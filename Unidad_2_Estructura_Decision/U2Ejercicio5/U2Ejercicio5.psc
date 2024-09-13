Algoritmo U2Ejercicio5
	Escribir 'Ingrese el importe de la venta:'
	Leer importeSinDescuento
	Si importeSinDescuento<100 Entonces
		importeConDescuento = importeSinDescuento*0.95
	SiNo
		Si importeSinDescuento<=500 Entonces
			importeConDescuento = importeSinDescuento*0.90
		SiNo
			importeConDescuento = importeSinDescuento*0.85
		FinSi
	FinSi
	Escribir 'El importe final es: ',importeConDescuento
FinAlgoritmo

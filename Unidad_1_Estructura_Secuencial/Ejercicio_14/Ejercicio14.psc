Algoritmo Ejercicio14
	Escribir "Ingrese el importe de la compra:"
	Leer importe
	Escribir "Ingrese el descuento a aplicar:"
	Leer descuento
	importeDescuento = importe * descuento / 100
	totalAPagar = importe - importeDescuento
	Escribir "Importe: ", importe, ", Descuento: ", importeDescuento, ", total: ", totalAPagar
FinAlgoritmo

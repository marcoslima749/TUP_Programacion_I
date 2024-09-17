Algoritmo U2Ejercicio20
	cantAltosMasTreinta = 0
	cantMasTreinta = 0
	totalMasTreinta = 0
	promedioMasTreinta = 0
	cantAlturaMedia = 0
	cantEdadRedonda = 0
	Escribir 'Ingrese la edad y la altura de 5 personas:'
	Leer edadUno,alturaUno
	Si edadUno>30 Entonces
		cantMasTreinta = cantMasTreinta+1
		totalMasTreinta = totalMasTreinta+alturaUno
		Si alturaUno>1.80 Entonces
			cantAltosMasTreinta = cantAltosMasTreinta+1
		FinSi
	FinSi
	Si alturaUno>=1.70&alturaUno<=1.80 Entonces
		cantAlturaMedia = cantAlturaMedia+1
	FinSi
	Si edadUno==20|edadUno==30|edadUno==40 Entonces
		cantEdadRedonda = cantEdadRedonda+1
	FinSi
	Leer edadDos,alturaDos
	Si edadDos>30 Entonces
		cantMasTreinta = cantMasTreinta+1
		totalMasTreinta = totalMasTreinta+alturaDos
		Si alturaDos>1.80 Entonces
			cantAltosMasTreinta = cantAltosMasTreinta+1
		FinSi
	FinSi
	Si alturaDos>=1.70&alturaDos<=1.80 Entonces
		cantAlturaMedia = cantAlturaMedia+1
	FinSi
	Si edadDos==20|edadDos==30|edadDos==40 Entonces
		cantEdadRedonda = cantEdadRedonda+1
	FinSi
	Leer edadTres,alturaTres
	Si edadTres>30 Entonces
		cantMasTreinta = cantMasTreinta+1
		totalMasTreinta = totalMasTreinta+alturaTres
		Si alturaTres>1.80 Entonces
			cantAltosMasTreinta = cantAltosMasTreinta+1
		FinSi
	FinSi
	Si alturaTres>=1.70&alturaTres<=1.80 Entonces
		cantAlturaMedia = cantAlturaMedia+1
	FinSi
	Si edadTres==20|edadTres==30|edadTres==40 Entonces
		cantEdadRedonda = cantEdadRedonda+1
	FinSi
	Leer edadCuatro,alturaCuatro
	Si edadCuatro>30 Entonces
		cantMasTreinta = cantMasTreinta+1
		totalMasTreinta = totalMasTreinta+alturaCuatro
		Si alturaCuatro>1.80 Entonces
			cantAltosMasTreinta = cantAltosMasTreinta+1
		FinSi
	FinSi
	Si alturaCuatro>=1.70&alturaCuatro<=1.80 Entonces
		cantAlturaMedia = cantAlturaMedia+1
	FinSi
	Si edadCuatro==20|edadCuatro==30|edadCuatro==40 Entonces
		cantEdadRedonda = cantEdadRedonda+1
	FinSi
	Leer edadCinco,alturaCinco
	Si edadCinco>30 Entonces
		cantMasTreinta = cantMasTreinta+1
		totalMasTreinta = totalMasTreinta+alturaCinco
		Si alturaCinco>1.80 Entonces
			cantAltosMasTreinta = cantAltosMasTreinta+1
		FinSi
	FinSi
	Si alturaCinco>=1.70&alturaCinco<=1.80 Entonces
		cantAlturaMedia = cantAlturaMedia+1
	FinSi
	Si edadCinco==20|edadCinco==30|edadCinco==40 Entonces
		cantEdadRedonda = cantEdadRedonda+1
	FinSi
	promedioMasTreinta = totalMasTreinta/cantMasTreinta
	Escribir 'La cantidad de personas mayores a 30 años que miden más de 1.80 metros es: ',cantAltosMasTreinta
	Escribir 'El promedio de altura de las personas mayores a 30 años es: ',promedioMasTreinta
	Escribir 'La cantidad de personas con altura entre 1.7 y 1.8 es: ',cantAlturaMedia
	Escribir 'La cantidad de personas cuya edad sea de 20, 30 o 40 años es: ',cantEdadRedonda
FinAlgoritmo

Algoritmo Terreno
	Definir ancho, largo, precioM, area, precioTotal Como Real
	Definir parimetro, alambre Como Real
	
	Escribir 'Ingrese el ancho del terreno: '
	Leer ancho
	
	Escribir 'Ingrese el largo del terreno: '
	Leer largo
	
	Escribir 'Ingrese el precio por metro cuadradro'
	Leer precioM
	
	area = ancho * largo
	precioTotal = area * precioM
	
	perimetro = (ancho + largo) * 2
	alambre = perimetro * 3
	
	Escribir 'El precio del terreno es: ' precioTotal
	Escribir 'Metros de alambre: ', alambre
FinAlgoritmo

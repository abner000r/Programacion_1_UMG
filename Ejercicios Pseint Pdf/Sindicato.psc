Algoritmo Sindicato
	Definir edad Como Entero
	Definir porcentaje, sueldo,aporte Como Real
	
	Escribir 'Ingrese la edad del empleado: '
	Leer edad 
	
	Escribir 'Ingrese el sueldo anual en dolares: '
	Leer sueldo
	
	Si sueldo < 10000 Entonces
		porcentaje <- 0.005
	SiNo
		Si sueldo >= 10000 Y sueldo <= 19999 Entonces
			porcentaje <- 0.01
		SiNo
			Si sueldo >= 20000 Y sueldo <= 29999 Entonces
				porcentaje <- 0.02
			SiNo
				porcentaje <- 0.025
			FinSi
		FinSi
	FinSi
	
	aporte <- sueldo * porcentaje
	
	si edad <= 30 Entonces
		aporte <- aporte + (aporte * 0.20)
	FinSi
	
	Escribir 'El aporte al sindicto es de: ', aporte
	
FinAlgoritmo

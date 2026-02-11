Algoritmo HoradelDia
	Definir hora Como Entero
	
	Repetir
		Escribir 'Ingrese la hora (0 a 23): '
		Leer hora
		
		Si hora < 0 o hora > 23 Entonces
			Escribir 'Error, hora no correcta'
		FinSi
		
	Hasta Que hora >= 0 Y hora <= 23
	
	Si hora >= 0 Y hora <= 5 Entonces
		Escribir 'Es Madrugada'
	SiNo
		Si hora >= 6 Y hora <= 11 Entonces
			Escribir 'Es mañana'
		SiNo
			si hora >= 12 Y hora <= 13 Entonces
				Escribir 'Es mediodia'
			Sino 
				Si hora >= 14 Y hora > 19 Entonces
					Escribir 'Es tarde'
				SiNo
					Escribir 'Es noche'
				FinSi
			FinSi
		FinSi
	FinSi
	
FinAlgoritmo

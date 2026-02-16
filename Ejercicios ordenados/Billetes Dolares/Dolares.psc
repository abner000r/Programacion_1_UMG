Algoritmo Dolares
	Definir monto Como Entero
	Definir b100, b50, b20, b10,b5,b2,b1 Como Entero
	
	b100 = 0
	b50 = 0
	b20 = 0
	b10 = 0
	b5 = 0
	b2 = 0
	b1 = 0
	
	Escribir 'Ingrese el monto en dolares: '
	Leer monto
	
	Mientras monto >= 100 Hacer
		monto = monto - 100
		b100 = b100 + 1
	FinMientras
	
	Mientras monto >= 50 Hacer
		monto = monto - 50
		b50 = b50 + 1
	FinMientras
	
	Mientras monto >= 20 Hacer
		monto = monto - 20
		b20 = b20 + 1
	FinMientras
	
	Mientras monto >= 10 Hacer
		monto = monto - 10
		b10 = b10 + 1
	FinMientras
	
	Mientras monto >= 5 Hacer
		monto = monto - 5
		b5 = b5 + 1
	FinMientras
	
	Mientras monto >= 2 Hacer
		monto = monto - 2
		b2 = b2 + 1
	FinMientras
	
	Mientras monto >= 1 Hacer
		monto = monto - 1
		b1 = b1 + 1
	FinMientras
	
	Escribir 'Billetes necesarios: '
	Escribir '100: ', b100
	Escribir '50: ', b50
	Escribir '20: ', b20
	Escribir '10: ', b10
	Escribir '5: ', b5
	Escribir '2: ', b2
	Escribir '1: ', b1
FinAlgoritmo

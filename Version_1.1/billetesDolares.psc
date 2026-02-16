Algoritmo billetesDolares
	Definir montoDescontar Como Entero
	Definir billete100, billete50, billete20, billete10,billete5,billete2,billete1 Como Entero
	
	billete100 = 0
	billete50 = 0
	billete20 = 0
	billete10 = 0
	billete5 = 0
	billete2 = 0
	billete1 = 0
	
	Escribir 'Ingrese el monto en dolares: '
	Leer montoDescontar
	
	Mientras montoDescontar >= 100 Hacer
		montoDescontar = montoDescontar - 100
		billete100 = billete100 + 1
	FinMientras
	
	Mientras montoDescontar >= 50 Hacer
		montoDescontar = montoDescontar - 50
		billete50 = billete50 + 1
	FinMientras
	
	Mientras montoDescontar >= 20 Hacer
		montoDescontar = montoDescontar - 20
		billete20 = billete20 + 1
	FinMientras
	
	Mientras montoDescontar >= 10 Hacer
		montoDescontar = montoDescontar - 10
		billete10 = billete10 + 1
	FinMientras
	
	Mientras montoDescontar >= 5 Hacer
		montoDescontar = montoDescontar - 5
		billete5 = billete5 + 1
	FinMientras
	
	Mientras montoDescontar >= 2 Hacer
		montoDescontar = montoDescontar - 2
		b2 = b2 + 1
	FinMientras
	
	Mientras montoDescontar >= 1 Hacer
		montoDescontar = montoDescontar - 1
		billete1 = billete1 + 1
	FinMientras
	
	Escribir 'Billetes necesarios: '
	Escribir '100: ', billete100
	Escribir '50: ', billete50
	Escribir '20: ', billete20
	Escribir '10: ', billete10
	Escribir '5: ', billete5
	Escribir '2: ', billete2
	Escribir '1: ', billete1
FinAlgoritmo

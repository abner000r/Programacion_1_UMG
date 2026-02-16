Algoritmo MenuCafeteria
	Definir Opcion Como Entero
	Definir montoDescontar Como Real
	Definir Continuar Como Caracter
	
	Escribir 'Bienvenido al menú de cafeteria'
	montoDescontar = 0
	Continuar = 'S'
	
	Repetir
		Escribir 'Menu de Hoy'
		Escribir 'Ingrese el numero de lo deseado 1-Tacos Q15,	'
		Escribir '2-Hamburguesa Q55, '
		Escribir '3-Pizza Q40,	'
		Escribir 'Cual es la Opcion'
		Leer Opcion
		
		Si Opcion == 1 Entonces
			montoDescontar = montoDescontar +15
		Sino
			Si opcion == 2 Entonces
				montoDescontar = montoDescontar + 55
			SiNo
				Si Opcion == 3 Entonces
					montoDescontar = montoDescontar + 40 
				SiNo
					Escribir 'Opcion invlida'
				FinSi
			FinSi
		FinSi
		
		Escribir 'Desea otra Opcion (S/N)'
		Leer Continuar
		
	Hasta Que Continuar == 'N'
	
	
	Escribir 'El total a pagar es: ', montoDescontar
	
	
	
FinAlgoritmo

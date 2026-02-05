Algoritmo MenuCafeteria
	Definir Opcion Como Entero
	Definir Monto Como Real
	Definir Continuar Como Caracter
	
	Escribir 'Bienvenido al menú de cafeteria'
	Monto = 0
	Continuar = 'S'
	
	Repetir
		Escribir 'Menu de Hoy'
		Escribir 'Ingrese el numero de lo deseado 1-Tacos Q15,	'
		Escribir '2-Hamburguesa Q55, '
		Escribir '3-Pizza Q40,	'
		Escribir 'Cual es la Opcion'
		Leer Opcion
		
		Si Opcion == 1 Entonces
			Monto = Monto +15
		Sino
			Si opcion == 2 Entonces
				Monto = Monto + 55
			SiNo
				Si Opcion == 3 Entonces
					Monto = Monto + 40 
				SiNo
					Escribir 'Opcion invlida'
				FinSi
			FinSi
		FinSi
		
		Escribir 'Desea otra Opcion (S/N)'
		Leer Continuar
		
	Hasta Que Continuar == 'N'
	
	
	Escribir 'El total a pagar es: ', Monto
	
	
	
FinAlgoritmo

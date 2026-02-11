Algoritmo MaxMin
	Definir N Como Entero
	Definir max Como Real
	Definir min Como Real
	Definir valor Como Real
	Definir i Como Entero
	
	Escribir  'Cuantos numeros desea ingresar: '
	Leer N
	i = 1
	mientras i <= N hacer
		Escribir 'Ingrese un valor: '
		Leer valor
		
		si i = 1 entonces
			min <- valor
			max <- valor
		SiNo
			si valor < min entonces
				min = valor
			FinSi
			
			si valor > max entonces
				max <- valor
			FinSi
		FinSi
		
		i <- i +1;
		
	FinMientras
	
	Escribir 'El valor maximo es: ', max
	Escribir 'El valor minimo es: ', min
	
FinAlgoritmo

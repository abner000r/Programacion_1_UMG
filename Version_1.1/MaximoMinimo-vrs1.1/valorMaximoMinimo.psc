Algoritmo MaxMin
	Definir numeroIngresar Como Entero
	Definir valorMaximo Como Real
	Definir valorMinimo Como Real
	Definir valor Como Real
	Definir i Como Entero
	
	Escribir  'Cuantos numeros desea ingresar: '
	Leer numeroIngresar
	i = 1
	mientras i <= numeroIngresar hacer
		Escribir 'Ingrese un valor: '
		Leer valor
		
		si i = 1 entonces
			valorMinimo <- valor
			valorMaximo <- valor
		SiNo
			si valor < valorMinimo entonces
				min = valor
			FinSi
			
			si valor > valorMaximo entonces
				valorMaximo <- valor
			FinSi
		FinSi
		
		i <- i +1;
		
	FinMientras
	
	Escribir 'El valor maximo es: ', valorMaximo
	Escribir 'El valor minimo es: ', valorMinimo
	
FinAlgoritmo

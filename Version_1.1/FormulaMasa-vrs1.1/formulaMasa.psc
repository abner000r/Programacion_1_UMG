Algoritmo Formula_Masa
	Definir c1 Como Real
	Definir c2 Como Real
	Definir Presion Como Real
	Definir volumen Como Real
	Definir temperatura Como Real
	Definir masa Como Real
	
	//constantes
	constante1<-0.37
	constante2<-460
	
	//Entradas de datos por parte del usuario
	Escribir 'Ingrese la presion:'
	Leer Presion
	Escribir 'Ingrese el Volumen:'
	Leer volumen
	Escribir 'Ingrese la temeratura:'
	Leer temperatura
	
	//Proceso 
	masa<-(presion*volumen)/(c1 * temperatura + c2)
	
	//Salida de datos al usuario 
	Escribir 'La masa resultante es: ', masa 
FinAlgoritmo

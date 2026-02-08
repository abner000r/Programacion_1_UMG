Algoritmo CalcEad
	Definir anioAc, AnioNac, edad Como Entero
	
	Escribir 'Ingrese el año actual'
	Leer anioAc
	
	Repetir
		Escribir 'Ingrese su año de nacimiento: '
		Leer AnioNac
		
		Si AnioNac > anioAc Entonces
			Escribir 'El año de nacimiento no puede ser mayor al año en que estamos'
			
		FinSi
		
	Hasta Que AnioNac <= anioAc
	
	edad = anioAc - AnioNac
	
	Escribir 'Tu edad es: ',edad, "años"
FinAlgoritmo

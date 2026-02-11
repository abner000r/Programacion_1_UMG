Algoritmo CalculodeMonedas
	Definir pagar, billete, vuelto Como Real
	Definir b5,b10,b20,b50,b100 Como Entero
	Definir m005, m010, m050, m1, m025 Como Entero
	
	Escribir 'Ingrese el total a pagar: '
	Leer pagar
	
	Escribir 'Ingrese el billete con que pagar: '
	Leer billete
	
	si billete < pagar Entonces
		Escribir 'El billete es insuficiente'
	SiNo
		vuelto = billete - pagar
		
		b100 = 0
		b50 = 0
		b20 = 0
		b10 = 0
		b5 = 0
		m005 = 0
		m025 = 0
		m010 = 0
		m050 = 0
		m1 = 0
		
		mientras vuelto >= 100 hacer
			vuelto = vuelto - 100
			b100 = b100 
		FinMientras
		
		mientras vuelto >= 50 hacer
			vuelto = vuelto - 50
			b50 = b50 + 1
		FinMientras
		
		mientras vuelto >= 20 hacer
			vuelto = vuelto - 20
			b20 = b20 + 1
		FinMientras
		
		mientras vuelto >= 10 hacer
			vuelto = vuelto - 10
			b10 = b10 + 1
		FinMientras
		
		mientras vuelto >= 5 hacer
			vuelto = vuelto - 5
			b5 = b5 + 1
		FinMientras
		
		mientras vuelto >= 0.05 hacer
			vuelto = vuelto - 0.05
			m005 = m005 + 1
		FinMientras
		
		mientras vuelto >= 0.10 hacer
			vuelto = vuelto - 0.10
			m010 = m010 + 1
		FinMientras
		
		mientras vuelto >= 0.25 hacer
			vuelto = vuelto - 0.25
			m025 = m025 + 1
		FinMientras
		
		mientras vuelto >= 0.50 hacer
			vuelto = vuelto - 0.50
			m050 = m050 + 1
		FinMientras
		
		mientras vuelto >= 1 hacer
			vuelto = vuelto - 1
			m1 = m1 + 1
		FinMientras
		
		
		Escribir 'Vuelto entregado: '
		Escribir 'Billetes de Q100: ', b100
		Escribir 'Bielletes de Q50: ',b50
		Escribir 'Billetes de Q20: ',b20
		Escribir 'Billetes de Q10: ', b10
		Escribir 'Billetes de Q5: ', b5
		Escribir 'Monedas de Q1: ', m1
		Escribir 'Monedas de Q0.50: ', m005
		Escribir 'Monedas de Q0.25: ', m025
		Escribir 'Monedas de Q0.10: ', m010
		Escribir 'Monedas de Q0.05: ', m005
	FinSi
	
FinAlgoritmo

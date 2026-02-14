// Este codigo ha sido generado por el modulo psexport 20230904-w32 de PSeInt.
// Es posible que el codigo generado no sea completamente correcto. Si encuentra
// errores por favor reportelos en el foro (http://pseint.sourceforge.net).

#include<iostream>
using namespace std;

// Para leer variables de texto se utiliza el operador << del objeto cin, que
// lee solo una palabra. Para leer una linea completa (es decir, incluyendo los
// espacios en blanco) se debe utilzar getline (ej, reemplazar cin>>x por
// getline(cin,x)), pero obliga a agregar un cin.ignore() si antes del getline
// se leyó otra variable con >>.

int main() {
	int b1;
	int b10;
	int b100;
	int b2;
	int b20;
	int b5;
	int b50;
	int monto;
	b100 = 0;
	b50 = 0;
	b20 = 0;
	b10 = 0;
	b5 = 0;
	b2 = 0;
	b1 = 0;
	cout << "Ingrese el monto en dolares: " << endl;
	cin >> monto;
	while (monto>=100) {
		monto = monto-100;
		b100 = b100+1;
	}
	while (monto>=50) {
		monto = monto-50;
		b50 = b50+1;
	}
	while (monto>=20) {
		monto = monto-20;
		b20 = b20+1;
	}
	while (monto>=10) {
		monto = monto-10;
		b10 = b10+1;
	}
	while (monto>=5) {
		monto = monto-5;
		b5 = b5+1;
	}
	while (monto>=2) {
		monto = monto-2;
		b2 = b2+1;
	}
	while (monto>=1) {
		monto = monto-1;
		b1 = b1+1;
	}
	cout << "Billetes necesarios: " << endl;
	cout << "100: " << b100 << endl;
	cout << "50: " << b50 << endl;
	cout << "20: " << b20 << endl;
	cout << "10: " << b10 << endl;
	cout << "5: " << b5 << endl;
	cout << "2: " << b2 << endl;
	cout << "1: " << b1 << endl;
	return 0;
}


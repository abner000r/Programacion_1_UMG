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
	float b2;
	int billete1;
	int billete10;
	int billete100;
	int billete2;
	int billete20;
	int billete5;
	int billete50;
	int montodescontar;
	billete100 = 0;
	billete50 = 0;
	billete20 = 0;
	billete10 = 0;
	billete5 = 0;
	billete2 = 0;
	billete1 = 0;
	cout << "Ingrese el monto en dolares: " << endl;
	cin >> montodescontar;
	while (montodescontar>=100) {
		montodescontar = montodescontar-100;
		billete100 = billete100+1;
	}
	while (montodescontar>=50) {
		montodescontar = montodescontar-50;
		billete50 = billete50+1;
	}
	while (montodescontar>=20) {
		montodescontar = montodescontar-20;
		billete20 = billete20+1;
	}
	while (montodescontar>=10) {
		montodescontar = montodescontar-10;
		billete10 = billete10+1;
	}
	while (montodescontar>=5) {
		montodescontar = montodescontar-5;
		billete5 = billete5+1;
	}
	while (montodescontar>=2) {
		montodescontar = montodescontar-2;
		b2 = b2+1;
	}
	while (montodescontar>=1) {
		montodescontar = montodescontar-1;
		billete1 = billete1+1;
	}
	cout << "Billetes necesarios: " << endl;
	cout << "100: " << billete100 << endl;
	cout << "50: " << billete50 << endl;
	cout << "20: " << billete20 << endl;
	cout << "10: " << billete10 << endl;
	cout << "5: " << billete5 << endl;
	cout << "2: " << billete2 << endl;
	cout << "1: " << billete1 << endl;
	return 0;
}


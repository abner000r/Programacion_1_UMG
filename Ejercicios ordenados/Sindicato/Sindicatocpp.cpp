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
	float aporte;
	int edad;
	float porcentaje;
	float sueldo;
	cout << "Ingrese la edad del empleado: " << endl;
	cin >> edad;
	cout << "Ingrese el sueldo anual en dolares: " << endl;
	cin >> sueldo;
	if (sueldo<10000) {
		porcentaje = 0.005;
	} else {
		if (sueldo>=10000 && sueldo<=19999) {
			porcentaje = 0.01;
		} else {
			if (sueldo>=20000 && sueldo<=29999) {
				porcentaje = 0.02;
			} else {
				porcentaje = 0.025;
			}
		}
	}
	aporte = sueldo*porcentaje;
	if (edad<=30) {
		aporte = aporte+(aporte*0.20);
	}
	cout << "El aporte al sindicto es de: " << aporte << endl;
	return 0;
}


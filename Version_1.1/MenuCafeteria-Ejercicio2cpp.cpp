#include<iostream>
using namespace std;

// Para leer variables de texto se utiliza el operador << del objeto cin, que
// lee solo una palabra. Para leer una linea completa (es decir, incluyendo los
// espacios en blanco) se debe utilzar getline (ej, reemplazar cin>>x por
// getline(cin,x)), pero obliga a agregar un cin.ignore() si antes del getline
// se leyó otra variable con >>.

int main() {
	string continuar;
	float montodescontar;
	int opcion;
	cout << "Bienvenido al menú de cafeteria" << endl;
	montodescontar = 0;
	continuar = "S";
	do {
		cout << "Menu de Hoy" << endl;
		cout << "Ingrese el numero de lo deseado 1-Tacos Q15,	" << endl;
		cout << "2-Hamburguesa Q55, " << endl;
		cout << "3-Pizza Q40,	" << endl;
		cout << "Cual es la Opcion" << endl;
		cin >> opcion;
		if (opcion==1) {
			montodescontar = montodescontar+15;
		} else {
			if (opcion==2) {
				montodescontar = montodescontar+55;
			} else {
				if (opcion==3) {
					montodescontar = montodescontar+40;
				} else {
					cout << "Opcion invlida" << endl;
				}
			}
		}
		cout << "Desea otra Opcion (S/N)" << endl;
		cin >> continuar;
	} while (continuar!=="N");
	cout << "El total a pagar es: " << montodescontar << endl;
	return 0;
}


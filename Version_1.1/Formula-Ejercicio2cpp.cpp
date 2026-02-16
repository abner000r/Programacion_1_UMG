#include<iostream>
using namespace std;

// Para leer variables de texto se utiliza el operador << del objeto cin, que
// lee solo una palabra. Para leer una linea completa (es decir, incluyendo los
// espacios en blanco) se debe utilzar getline (ej, reemplazar cin>>x por
// getline(cin,x)), pero obliga a agregar un cin.ignore() si antes del getline
// se leyó otra variable con >>.

int main() {
	float valor;
	cout << "Ingrese un valor numerico: " << endl;
	cin >> valor;
	if (valor%2==0) {
		cout << "El valor: " << valor << "es par" << endl;
	} else {
		cout << "El valor: " << valor << "es impar" << endl;
	}
	return 0;
}


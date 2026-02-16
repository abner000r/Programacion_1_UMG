#include<iostream>
using namespace std;

// Para leer variables de texto se utiliza el operador << del objeto cin, que
// lee solo una palabra. Para leer una linea completa (es decir, incluyendo los
// espacios en blanco) se debe utilzar getline (ej, reemplazar cin>>x por
// getline(cin,x)), pero obliga a agregar un cin.ignore() si antes del getline
// se leyó otra variable con >>.

int main() {
	float c1;
	float c2;
	float constante1;
	float constante2;
	float masa;
	float presion;
	float temperatura;
	float volumen;
	// constantes
	constante1 = 0.37;
	constante2 = 460;
	// Entradas de datos por parte del usuario
	cout << "Ingrese la presion:" << endl;
	cin >> presion;
	cout << "Ingrese el Volumen:" << endl;
	cin >> volumen;
	cout << "Ingrese la temeratura:" << endl;
	cin >> temperatura;
	// Proceso
	masa = (presion*volumen)/(c1*temperatura+c2);
	// Salida de datos al usuario
	cout << "La masa resultante es: " << masa << endl;
	return 0;
}


#include<iostream>
using namespace std;

// Para leer variables de texto se utiliza el operador << del objeto cin, que
// lee solo una palabra. Para leer una linea completa (es decir, incluyendo los
// espacios en blanco) se debe utilzar getline (ej, reemplazar cin>>x por
// getline(cin,x)), pero obliga a agregar un cin.ignore() si antes del getline
// se leyó otra variable con >>.

int main() {
	int i;
	float min;
	int numeroingresar;
	float valor;
	float valormaximo;
	float valorminimo;
	cout << "Cuantos numeros desea ingresar: " << endl;
	cin >> numeroingresar;
	i = 1;
	while (i<=numeroingresar) {
		cout << "Ingrese un valor: " << endl;
		cin >> valor;
		if (i==1) {
			valorminimo = valor;
			valormaximo = valor;
		} else {
			if (valor<valorminimo) {
				min = valor;
			}
			if (valor>valormaximo) {
				valormaximo = valor;
			}
		}
		i = i+1;
	}
	cout << "El valor maximo es: " << valormaximo << endl;
	cout << "El valor minimo es: " << valorminimo << endl;
	return 0;
}


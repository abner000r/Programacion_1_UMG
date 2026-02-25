#include <iostream>
using namespace std;

int main(){
    int cantidad, numero, suma = 0;

    cout << "Cuantos numeros va a ingresar : ";
    cin >> cantidad;

    for (int i = 1; i <= cantidad; i++){
        cout << "Ingrese numeros: ";
        cin >> numero;
        suma += numero;
    }
    cout << "La suma es: " << suma  << endl;
    return 0;
}

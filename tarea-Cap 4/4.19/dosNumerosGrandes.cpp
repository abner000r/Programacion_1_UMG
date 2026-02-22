#include <iostream>
using namespace std;

int main(){
   int numero;
   int mayor1 = 0, mayor2 = 0;
   int contador = 1;

   while (contador <= 10){
    cout << "Ingrese numero: ";
    cin >> numero;
    if (numero > mayor1){
        mayor2 = mayor1;
        mayor1 = numero;
    } else if (numero > mayor2){
        mayor2 = numero;
    }
    contador++;
   }
   cout << "Mayor 1: " << mayor1 << endl;
   cout << "Mayor 2: " << mayor2 << endl;

    return 0;
}


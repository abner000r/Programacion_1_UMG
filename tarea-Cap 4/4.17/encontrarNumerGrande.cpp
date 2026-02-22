#include <iostream>
using namespace std;

int main(){
   int numero;
   int mayor= 0;
   int contador =  1 ;

   while (contador <= 10){
    cout << "Ingrese numero: ";
    cin >> numero;

    if (contador == 1 || numero > mayor)
        mayor = numero;
    contador++;
   }

   cout << "El numero mayor es: " << mayor << endl;

    return 0;
}


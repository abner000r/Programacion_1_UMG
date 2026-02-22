#include <iostream>
using namespace std;

int main(){
   int binario;
   int decimal = 0;
   int base = 1;
   int digito;

   cout << "Ingrse numero binario: ";
   cin >> binario;

   while (binario> 0){
    digito = binario % 10;
    decimal += digito * base;
    base = base *2;
    binario = binario / 10;
   }
   cout << "Numero decimal: " << decimal << endl;

    return 0;
}


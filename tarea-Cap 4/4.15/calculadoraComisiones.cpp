
#include <iostream>
using namespace std;

int main(){
   double ventas;
   double totalKm = 0, totalLitros= 0;

   cout << "Indroduzca las ventas en dolares (-1 para salir): ";
   cin >> ventas;

   while (ventas != -1){
    double salario = 200 + (ventas * 0.09);

    cout << "El salario es: $ " << salario << endl;

    cout << "Introduzca las ventas en dolares (-1 para salir): ";
    cin >> ventas;
   }


   return 0;
}


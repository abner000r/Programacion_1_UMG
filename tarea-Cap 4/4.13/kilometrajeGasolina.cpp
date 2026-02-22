#include <iostream>
using namespace std;

int main(){
   double kilometros, litros;
   double totalKm = 0, totalLitros= 0;

   cout << "Ingrese los kilometros usados (-1 para salir): ";
   cin >>kilometros;

   while (kilometros != -1){
    cout << "Escriba los litros: ";
    cin >> litros;

    cout << "KPL en este reabestimiento: " << kilometros / litros << endl;

    totalKm += kilometros;
    totalLitros += litros;
   }
   if (totalLitros != 0)
    cout << "Total KPL: " << totalKm / totalLitros << endl;

   return 0;
}


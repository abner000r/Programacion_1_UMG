#include <iostream>
using namespace std;

int main(){
    double km, precio,rendimiento,parqueo, peaje;
    double costo;

    cout <<"Kilometros por dia: ";
    cin >> km;
    cout <<"Precio por litrO: : ";
    cin >> precio;
    cout <<"Kilometros por litro: ";
    cin >> rendimiento;
    cout <<"Estacionamiento por dia: ";
    cin >> parqueo;
    cout <<"peaje por dia: ";
    cin >> peaje;

    costo =(km / rendimiento) * precio + parqueo + peaje;
    cout << "Costo diario: " <<costo << endl;

    return 0;
}

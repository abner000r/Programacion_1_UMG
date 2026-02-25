#include <iostream>
using namespace std;

int main(){
    int opcion;
    double total = 0, gasto;

    cout << "Ingrese gastos (1=Comida, 2=Ropa, 3=Transporte, 0=Salir)\n";

    do {
        cout << "Opcion: ";
        cin >> opcion;

        if (opcion != 0){
            cout << "Monto: ";
            cin >> gasto;
            total += gasto;
        }
    } while (opcion != 0);

    double impuesto = total * 0.23;

    cout << "Total gasto: " << total  << endl;
    cout << "Impuesto FairTax (23%): " << impuesto << endl;


    return 0;
}

#include <iostream>
using namespace std;

int main(){
    int codigo;
    cout << "Ingrese codigo (1-Gerente, 2-Horas, 3-Comision, 4-Piezas): ";
    cin >> codigo;

   switch(codigo){
        case 1: {
        double salario;
        cout << "Salario fijo: ";
        cin>> salario;
        cout << "Pago semanaal: " << salario << endl;
        break;
    }
    case 2: {
        double horas, sueldo, pago;
        cout << "Horas trabajadas: ";
        cin>> horas;
        cout << "Pago por hora: ";
        cin>> sueldo;

        if(horas <= 40)
            pago = horas * sueldo;
        else
            pago = 40 * sueldo + (horas - 40) *  sueldo * 1.5;
        break;
    }
    case 3: {
        double ventas, pago;
        cout << "Ventas semanales: ";
        cin>> ventas;
        pago = 250 + ventas  * 0.057;
        cout << "Pago Semanal: " << pago << endl;
        break;
    }
    case 4: {
        int piezas;
        double pagoPorPiezas;
        cout << "Cantidad de piezas: ";
        cin>> piezas;
        cout << "Pago por Piezas: ";
        cin >> pagoPorPiezas;
        cout << "Pago semanal: " << piezas * pagoPorPiezas << endl;
        break;
    }
        default:
            cout << "Codigo invalido" << endl;
   }


    return 0;
}

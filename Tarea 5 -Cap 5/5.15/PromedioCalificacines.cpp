#include <iostream>
using namespace std;

int main(){
    char nota;
    int total = 0;
    int contador = 0;

    cout << "Ingrese calificaiones (A,B,C,D,F) y X para salir\n";
    cin >> nota;

    while (nota != 'X'){
        switch (nota){
            case 'A': total += 4; break;
            case 'B': total += 3; break;
            case 'C': total += 2; break;
            case 'D': total += 1; break;
            case 'F': total += 0; break;
        }
        contador++;
        cin >> nota;
    }
    if (contador > 0)
        cout << "Promedio: " << (double)total/contador << endl;
    else
        cout << "No ingrese notas" << endl;

    return 0;

}

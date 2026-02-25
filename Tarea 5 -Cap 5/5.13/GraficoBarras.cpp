#include <iostream>
using namespace std;

int main(){
    int numero;

    for (int i = 1; i <= 5; i++){
        cout << "Ingrese un numero: (1-30): ";
        cin >> numero;
        
        for (int j = 1; j <= numero; j++){
            cout << "*";
        }
    }
    cout << endl;
    return 0;
}

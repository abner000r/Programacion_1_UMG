#include <iostream>
using namespace std;

int main(){
    double principal = 24.0;
    int anios = 387;

    for(int tasa = 5; tasa <= 10; tasa++){

        double monto = principal;

        for(int i = 1; i <= anios; i++){
            monto = monto + monto * tasa / 100.0;
        }
        cout << "Tasa " << tasa << "%: " << monto << endl;
    }
    return 0;
}

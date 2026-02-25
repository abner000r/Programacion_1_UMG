#include <iostream>
using namespace std;

int main(){
    double principal = 100;
    int anios= 10;

   
    for (int tasa = 5; tasa <= 10; tasa++){
        double monto = principal;
        for(int i = 1; i <= anios; i++){
            monto = monto + monto * tasa /100.0;
        }
    
    cout << "Tasa:  " << tasa << "%: "<< monto  << endl;
    }
    return 0;
}

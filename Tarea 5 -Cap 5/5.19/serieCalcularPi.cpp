#include <iostream>
using namespace std;

int main(){
    double pi = 0.0;
    int signo = 1;

    for(int i = 1; i <= 2000; i += 2){
        pi = pi + signo * (4.0 / i);
        signo = -signo;
        cout << "Valor aproximado: " << pi << endl;
    }
    return 0;
}

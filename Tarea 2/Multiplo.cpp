#include <iostream>
using namespace std;

int main ()
{
    int a,b;
    cout << "Ingrese dos numeros: ";
    cin >> a >> b;

    if (a % b == 0)
        cout << "Es multiplo: "<< endl;
    else
        cout << "No es multiplo" << endl;

    return 0;
}

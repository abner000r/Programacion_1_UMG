#include <iostream>
using namespace std;

int main(){
    int a, b, c;

    cout << "Ingrese los tres lados: ";
    cin >> a >> b >> c;

    if (a*a + b*b == c*c ||
        a*a + c*c == b*b ||
        b*b + c*c == a*a)
        cout << "Es un triangulo rectangulo."<< endl;
    else
        cout << "No es un triangulo rectangulo." << endl;

    return 0;
}

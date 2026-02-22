#include <iostream>
using namespace std;

int main(){
int edad;

cout << "Ingrese la edad: ";
cin >> edad;

if (edad >= 65)
    cout << "Edad es mayor o igual que 65" << endl;
else
    cout <<"Edad es menor que 65" << endl;

return 0;
}

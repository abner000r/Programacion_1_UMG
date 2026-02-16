#include <iostream>
using namespace std;

int main ()
{
    int n, mayor,menor;
    cout<<"Ingrese 5 numeros: ";
    cin>> n;

    mayor=menor=n;
    for (int i =2; i<=5; i++){
        cin>> n;

        if (n>mayor) mayor =n;
        if (n<menor) menor =n;
    }
    cout << "Mayor: " << mayor << endl;
    cout << "Menor: " << menor << endl;
}

#include <iostream>
using namespace std;

int main()
{
    int Num;

    cout << "Ingresa el Numero entero para verificar si es par \n";
    cin >> Num;

    if (Num % 2 == 0)
    {
        cout << "El Numero " << Num << " Es Par";
    }
    else
    {
        cout << "El Numero " << Num << " Es Inpar";
    }
}


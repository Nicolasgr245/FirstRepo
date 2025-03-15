#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main()
{
    string Texto;
    cout << "Introduce un texto para calcular sus palabras: " << endl;
    getline(cin, Texto);
    istringstream Stream(Texto);
	string Palabra;
    int Contador = 0;

    while (Stream >> Palabra) {
        Contador++;
    }
    
    cout << "Tiene " << Contador << " Palabras";
    return 0;
}

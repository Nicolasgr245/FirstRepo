
#include <iostream>
#include <string>

using namespace std;

int main() {

	string date = __DATE__;
	
	string Month;
	int day;  
	int year;

	cout << date;

    string texto;
    int contador = 0;
    bool enPalabra = false;

    cout << "Ingrese un texto: ";
    getline(cin, texto); // Leer toda la línea incluyendo espacios

    for (char letra : texto) {
        if (letra == ' ') {
            if (enPalabra) {
                enPalabra = false;
            }
        }
        else {
            if (!enPalabra) {
                contador++;
                enPalabra = true;
            }
        }
    }

    cout << "El texto tiene " << contador << " palabras." << endl;


	return 0;
}


#include <iostream>
using namespace std;

int main() {
    int num;
    bool esPrimo = true;
    cout << "Ingresa un numero: ";
    cin >> num;
    if (num <= 1) {
        esPrimo = false;
    }
    else {
        for (int i = 2; i <= num / 2; ++i) {
            if (num % i == 0) {
                esPrimo = false;
                break;
            }
        }
    }
    if (esPrimo) {
        cout << num << " es un numero primo" << endl;
    }
    else {
        cout << num << " no es un numero primo" << endl;
    }
    return 0;
}


#include <iostream>
using namespace std;

int main()
{
    char Letra;

    for (int i = 0; i <= 254; i++) {

        Letra = static_cast<char>(i);
        if (Letra != '\0') {
            cout << i << " = " << Letra << endl;
        }

  }

    return 0;
}


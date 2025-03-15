#include <iostream>
#include <cmath>

using namespace std;

int main() {

	cout << "Calculadora de un triangulo rectangulo" <<endl;
	cout << "Caso 1: Calcular la hipotenusa" << endl;
	cout << "Caso 2: Calcular el cateto adyasente" << endl;
	cout << "Caso 3: Calcular el cateto opuesto" << endl;

	int caso;
	float hipotenusa;
	float adyasente;
	float opuesto;

	cout << "elije el caso: ";
	cin >> caso;
	cout << endl;

	switch (caso)
	{
	case 1:
		cout << "Ingresa cateto adyasente: ";
		cin >> adyasente;
		cout << "Ingresa cateto opuesto: ";
		cin >> opuesto;
		hipotenusa = sqrt(pow(adyasente, 2) + pow(opuesto, 2));
		cout << "Esto mide la hipotenusa: " << hipotenusa;
	break;
	case 2:
		cout << "Ingresa hipotenusa: ";
		cin >> hipotenusa;
		cout << "Ingresa cateto opuesto: ";
		cin >> opuesto;
		adyasente = sqrt(pow(hipotenusa, 2) - pow(opuesto, 2));
		cout << "Esto mide el cateto adyasente: " << adyasente;
		break;
	break;
	case 3:
		cout << "Ingresa hipotenusa: ";
		cin >> hipotenusa;
		cout << "Ingresa cateto adyasente: ";
		cin >> adyasente;
		opuesto = sqrt(pow(hipotenusa, 2) - pow(adyasente, 2));
		cout << "Esto mide el cateto opuesto: " << opuesto;
		break;
	break;
	default:
		cout << "Caso incorrecto ";
		break;
	}

	return 0;
}


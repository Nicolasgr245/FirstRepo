#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

	string InNumero;
	getline(cin, InNumero);
	istringstream stream(InNumero);
	int Numero;
	vector<int> Numeros;

	while (stream >> Numero) {
		Numeros.push_back(Numero);
	}
	sort(Numeros.begin(), Numeros.end());
	for (int num : Numeros) {
		cout << num << " ";
	}

	return 0;
}
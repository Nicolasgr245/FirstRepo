#include <iostream>
#include <utility>
#include <string>
#include <sstream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    string Numbers;
    cout << "Calculate from smallest to largest!\n";
    getline(cin, Numbers);
    istringstream stream(Numbers);
    int Number;
    vector<int> numeros;

    while (stream >> Number) {
        numeros.push_back(Number);
    }
    sort(numeros.begin(), numeros.end());

    for (int num : numeros) {
        cout << num << " ";
    }
    return 0;
}

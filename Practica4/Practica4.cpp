#include <iostream>
using namespace std;

int main()
{
	const int x = 10;
	const int y = 10;
	const int z = 10;
	int arr[x][y][z];

	for (int k = 0; k < x; k++) {
		for (int j = 0; j < y; j++) {
			for (int h = 0; h < z; h++) {
				arr[k][j][h] = j + 1;
				cout << arr[k][j][h] << " ";
			}
			cout << endl;
		}
		cout << endl;
	}

}
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	for (int n = 0; n <= 1; n++) {
		for (int i = 1; i <= 9; i++) {
			for (int j = 2 + n * 4; j <= 5 + n * 4; j++)
				cout << i << '*' << j << '=' << setw(2) << i * j << ' ';
			cout << endl;
		}
		cout << endl << endl;
	}
	system("pause");
	return 0;
}
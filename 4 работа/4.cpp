#include <iostream>
#include <cstdlib>
#include <locale>
#include <ctime>
#include <iomanip>
using namespace std;

int main()
{
	srand(time(0));
	int n;
	cin >> n;
	int* a = new int[n];
	for (int i = 0; i < n; i++)
	{
		a[i] = rand() % 10;
		cout << setw(3) << a[i];
	}
	cout << endl;

	int b, k, kol, max = 1;
	b = a[0];
	for (int i = 0; i < n-1; i++)
	{
		kol = 1;
		for (k = i + 1; k < n; k++)
			if (a[i] == a[k])
				kol++;
		if (kol > max)
		{
			max = kol;
			b = a[i];
		}
	}
	cout << b << endl;
	delete[] a;
	system("pause");
	return 0;
}
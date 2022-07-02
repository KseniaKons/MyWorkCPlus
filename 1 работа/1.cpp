#include <iostream>
#include <locale>
#include <cstdlib>
#include <math.h>
using namespace std;

int main()
{
	double a, b = 1, c = 1, sum, x, f;
	double e = 0.0001;
	cin >> x;
	sum = x;
	int i = 1;
	for (int n = 1; abs(c) >= e; n++)
	{
		a = (pow(-1, n) * pow(2, 2 * n - 1) * pow(x, 2 * n));
		while (i <= 2 * n)
		{
			b *= i;
			i++;
		}
		c = a / b;
		sum += c;
	}
	f = x - pow(sin(x), 2);
	cout << sum << " " << f << endl;
	return 0;
}
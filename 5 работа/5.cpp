#include <iostream>;
#include <cstdlib>;
#include <locale>;
#include <ctime>;
#include <iomanip>;

using namespace std;

int** ChitosBuritos(int& n, int& m)
{
	int** mas = new int* [n];
	for (int i = 0; i < n; i++)
		mas[i] = new int[m];
	return mas;
}


int Chikibamboni(int** mas, int& n, int& m)
{
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			mas[i][j] = rand() % 100;
			cout << setw(4) << mas[i][j];
			sum += mas[i][j];
		}
		cout << endl;
	}
	cout <<  endl;
	return sum / (m * n);
}

int main()
{
	srand(time(0));
	int e, d, g, f, a, b;
	setlocale(LC_ALL, "RUS");
	cout << "Размер массива №1: ";
	cin >> e >> d;
	cout << "Размер массива №2: ";
	cin >> g >> f;
	int** mas1; int** mas2;
	mas1 = ChitosBuritos(e, d);
	mas2 = ChitosBuritos(g, f);
	a = Chikibamboni(mas1, e, d);
	b = Chikibamboni(mas2, g, f);
	cout << "Среднее значение массива №1: " << a << endl;
	cout << "Среднее значение массива №2: " << b << endl;
	system("pause");
	return 0;

}


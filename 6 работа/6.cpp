#include <iostream>
#include <cstdlib>
#include <locale>
#include <ctime>
#include <fstream>
#include <math.h>
#include <iomanip>


using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");

	ofstream file;
	file.open("data.txt");
	if (!file.is_open())
		cout << "Ошибка открытия файла" << endl;
	else
	{
		int b[10][10];
		srand(time(0));
		for (int i = 0; i < 10; i++)
			for (int j = 0; j < 10; j++)
				b[i][j] = rand() % 20;
		for (int i = 0; i < 10; i++)
		{
			for (int j = 0; j < 10; j++)
			{
				if (b[i][j] < 10)
					file << " " << b[i][j] << " ";
				else
					file << b[i][j] << " ";
			}
			file << endl;
			for (int j = 0; j < 10; j++)
				file << " *";
			file << endl;
		}
	}
	file.close();

	ifstream in;
	in.open("data.txt");
	if (!in.is_open())
		cout << "Ошибка открытия файла in" << endl;
	ofstream out;
	out.open("data2.txt");
	if (!out.is_open())
		cout << "Ошибка открытия файла out" << endl;
	char c;
	while (in.get(c))
	{
		if (c != '*')
			out << c;
	}

	in.close();
	out.close();



	double a[10][10];

	ifstream input;
	input.open("data2.txt");
	if (!input.is_open())
		cout << "Ошибка открытия файла input" << endl;

	for (int i = 0; i < 10; i++)
		for (int j = 0; j < 10; j++)
			input >> a[i][j];

	input.close();
	
	cout << "Массив из файла:" << endl;
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
			cout << setw(4) << a[i][j];
		cout << endl;
	}
	cout << endl;
	
	unsigned int p1 = 1, p2 = 1;
	double sr;

	for (int i = 0; i < 10; i++)
		for (int j = 0; j < 10; j++)
			if (i == j)
				p1 *= a[i][j];

	for (int i = 0; i < 10; i++)
		for (int j = 0; j < 10; j++)
			if (i+j == 9)
				p2 *= a[i][j];

	sr = pow(p1 * p2, 1.0 / 20);
	
	cout << "Среднее геометрическое значение соответствующих элементов =  " << sr << endl;
	cout << endl;

	for (int i = 0; i < 10; i++)
		for (int j = 0; j < 10; j++)
			a[i][9] = sr;

	cout << "Измененный массив:" << endl;
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
			cout << setw(10) << a[i][j];
		cout << endl;
	}
	cout << endl;

	ofstream fout;
	fout.open("result.txt");
	if (!fout.is_open())
		cout << "Ошибка открытия файла fout" << endl;
	for (int i = 0; i < 10; i++)
	{
		fout << "* " ;
		for (int j = 0; j < 10; j++)
		{ 
			if (a[i][j]<10)
			    fout << " " << "(" << a[i][j] << ")" << "! ";
			else 
				fout << "(" << a[i][j] << ")" << "! ";
		
		}
		fout << "\n";
	}
	fout << "\n";

	fout.close();

	system("pause");
	return 0;
}

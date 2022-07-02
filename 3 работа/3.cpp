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
    int** a = new int* [n];
    for (int k = 0; k < n; k++)
        a[k] = new int[n];

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            a[i][j] = rand() % 101;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            cout << setw(3) << a[i][j] << "  ";
        cout << endl;
    }

    cout << endl;
    int c;

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
        {
            if ((a[i][j] % 2 == 0) and (j == n - 1))
                a[i][j] += a[i][i];
        }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            cout << setw(3) << a[i][j] << "  ";
        cout << endl;
    }

    for (int k = 0; k < n; k++)
        delete[] a[k];

    system("pause");
    return 0;
}
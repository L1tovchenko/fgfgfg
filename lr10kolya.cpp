// lr10kolya.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//


#include <iostream>

using namespace std;

int main()
{
    const int MAX = 10;
    setlocale(LC_ALL, "RU");
    srand(time(NULL));
    int mas[MAX][MAX];
    int n, m, q;
    int k, p;
    int i, j;
    int sum = 0;
    cout << "Введите количество строк: ";
    cin >> n;
    cout << "Введите количество столбцов: ";
    cin >> m;
    cout << "Строка k = ";
    cin >> k;
    cout << "Строка p = ";
    cin >> p;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            mas[i][j] = rand() % 20-10;
            cout << mas[i][j] << "\t";
        }
        cout << endl;
    }
    cout << endl;
    for (int i = k; i < p - 1; i++)
    {
        for (j = 0; j < m; j++)
        {
            sum += mas[i][j];
        }
    }
    cout << "Сумма елементов между " << k << " и " << p << " строкой: " << sum << endl;
    system("PAUSE");
    return 0;
}
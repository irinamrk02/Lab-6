// 1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

int main()
{
    setlocale(0, "");
    const int N = 10;
    int a[N];

    cout << "Введите 10 цифр:";
    for (int i = 0; i < N; i++)
    {
        cin >> a[i];
    }

    cout << "Массив: " << endl;
    for (int i = 0; i < N; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}


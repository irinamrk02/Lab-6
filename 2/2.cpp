// 2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <ctime>

using namespace std;

int main() {
    const int N = 10;
    int a[N] = {};
    srand(time(NULL));
    for (int i = 0; i < N; i++)
    {
        a[i] = rand() % 20 + (-10);
        cout << a[i] << " ";
    }
    cout << "\n";

    for (int i = 0; i < N; i++)
        if (a[i] < 0)
            a[i] = 0;

    for (int i = 0; i < N; i++)
        cout << a[i] << " ";
}

// 3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <ctime>

using namespace std;

int main()
{
	setlocale(0, "");
	int N;
	int* a;
	cout << "Введите размер массива: ";
	cin >> N;
	a = new int[N];
	srand(time(NULL));
	for (int i = 0; i <= N; i++)
	{
		a[i] = rand() % 101;
		cout << a[i] << " ";
	}

	cout << "\nСумма чисел массива: " << endl;
	int sum = 0;
	for (int i = 0; i <= N; i++)
	{
		sum = sum + a[i];
	}
	cout << sum;

	return 0;
}
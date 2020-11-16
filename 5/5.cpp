// 5.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <ctime>

using namespace std;

int main()
{
	setlocale(0, "");
	const int N = 10;
	int a[N];
	srand(time(NULL));
	for (int i = 0; i < N; i++)
	{
		a[i] = rand() % 30 + (-10);
		cout << a[i] << " ";
	}
	cout << "\n";

	int min = a[0];
	int num1;
	for (int i = 0; i < N; i++)
	{
		if (a[i] < min)
		{
			min = a[i];
			num1 = i;
		}
	}

	int max = a[0];
	int num2;
	for (int i = 0; i < N; i++)
	{
		if (a[i] > max)
		{
			max = a[i];
			num2 = i;
		}
	}

	cout << "Наименьший элемент массива = " << min << "\n";
	cout << "Наибольший элемент массива = " << max << "\n";

	for (int i = 0; i < N; i++)
	{
		int b = a[num1];
		a[num1] = a[num2];
		a[num2] = b;
		cout << a[i] << " ";
	}

	return 0;
}
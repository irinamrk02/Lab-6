// 4.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <ctime>

using namespace std;

int main()
{
	setlocale( 0, "");
	const int N = 10;
	int a[N]{};
	srand(time(NULL));
	for (int i = 0; i < N; i++)
	{
		a[i] = rand() % 30 + (-10);
		cout << a[i] << " ";
	}
	cout << "\n";

	int min = a[0];
	int number;
	for (int i = 0; i < N; i++)
	{
		if (a[i] < min)
		{
			min = a[i];
			number = i;
		}
	}
	cout << "Наименьший элемент массива = " <<min<< "\n";
	cout <<"Порядковый номер = "<< number << endl;
	return 0;
}


// 6.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <locale.h>
#include <ctime>

using namespace std;

int main()
{
	setlocale(0, "");
	const int N = 20;
	int a[N]{};
	srand(time(NULL));
	for (int i = 0; i < N; i++)
	{
		a[i] = rand() % 20;
		cout << a[i] << " ";
	}
	cout << "\n";

	int i;
	int pair = 0; 	

	for (i = 0; i < N - 1; i++)
	{
		if (a[i] == a[i + 1]) 
		{
			pair++; 
		}
	}
	cout << "число пар = " << pair << endl;  
	return 0;

}


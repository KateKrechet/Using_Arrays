#include <iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Russian");
	const int n = 5;
	int arr[n];
	//rand();
	int minRand, maxRand;
	do
	{
		cout << "Введите минимальное возможное случайное число: "; cin >> minRand;
		cout << "Введите максимальное возможное случайное число: "; cin >> maxRand;
		if (minRand >= maxRand) cout << "Будьте внимательнее, повторите ввод!" << endl;
	} while (minRand >= maxRand);
	//srand(time(NULL));
	//заполнение массива случайными числами
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % (maxRand - minRand) + minRand;
	}

	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}
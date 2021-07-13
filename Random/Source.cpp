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
	//вывод исходного массива на экран
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;

	//сортировка выбором
	for (int i = 0; i < n; i++) //выбирает элемент, в который нужно поместить минимальный элемент
	{
		for (int j = i + 1; j < n; j++)
			if (arr[j] < arr[i]) //если перебираемый меньше выбранного элемента
			{
				int buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;

			}

	}

	//вывод отсортированного массива на экран
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}
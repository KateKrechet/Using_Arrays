#include <iostream>
using namespace std;
#define tab "\t"
//#define ARR_LESSON

void main()

{
	setlocale(LC_ALL, "Russian");
#ifdef ARR_LESSON
	const int SIZE = 5;
	int arr[SIZE] = { 3,5,8 };
	//ввод элементов с клавиатуры
	cout << "Введите значения элементов: ";
	for (int i = 0; i < SIZE; i++)
	{
		cin >> arr[i];
	}


	//вывод массива на экран
	for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;

	//вывод масива на экран в обратном порядке
	for (int i = SIZE - 1; i >= 0; i--)
	{
		cout << arr[i] << tab;

	}
	cout << endl;

	int sum = 0;
	for (int i = 0; i < SIZE; i++)
	{
		sum = sum + arr[i];

	}
	cout << "Сумма элементов массива: " << sum;
	cout << endl;

	float sr_arifm = (float)sum / (SIZE);
	cout << "Среднее арифметическое: " << sr_arifm;
	cout << endl;

	int max = arr[0];
	int min = arr[0];

	for (int i = 0; i < SIZE; i++)
	{
		if (arr[i] > max) max = arr[i];
		if (arr[i] < min) min = arr[i];

	}
	cout << "Максимальный элемент: " << max;
	cout << endl;
	cout << "Минимальный  элемент: " << min;
	cout << endl;
#endif // ARR_LESSON

	const int SIZE = 10;
	int arr[SIZE] = { 1,2,3,4,5,6,7,8,9,10 };
	int n;
	cout << "Введите сдвиг: "; cin >> n;
	for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i] << tab;

	}
	cout << endl;
	for (int i = 0; i < SIZE; i++)
	{
		if (i + n + 1 > SIZE) cout << arr[i + n - SIZE] << tab;
		else if (i + n < 0) cout << arr[i] << tab;
		else cout << arr[i + n] << tab;

	}
	cout << endl;
	main();
	cout << endl;

}
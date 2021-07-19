#include <iostream>;
using namespace std;
using std::cin;
using std::cout;
//#define UNIQUE_10
#define REPLAY
void main()
{
	setlocale(LC_ALL, "Russian");
#ifdef UNIQUE_10
	const int n = 10;
	int arr[n];
	srand(time(NULL));

	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 10;
	}

	/*for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;*/

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < i; j++)
		{
			if (arr[j] == arr[i])
			{
				arr[i] = rand() % 10;
				j = -1;
			}
			//cout << arr[i] << "\t";
		}
		//cout << endl;
	}
	cout << endl;

	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
#endif // UNIQUE_10

#ifdef REPLAY
	const int n = 10;
	int arr[n];
	srand(time(NULL));

	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 10;
	}

	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;

	int counter = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (arr[i] == arr[j])
			{
				counter++;
			}
		}

		for (int k = 0; k < i; k++)
		{
			if (arr[k] == arr[i])
			{
				arr[i] = -1;

			}

		}

		if (counter > 1 && arr[i] != -1)
		{
			cout << arr[i] << " встречается: " << counter << " раз";
			cout << endl;
		}

		counter = 0;
	}

#endif // REPLAY

}

#include <iostream>
#include "array.h"
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
	int arr_size;
	int positive = 0;
	int negative = 0;

	setlocale(LC_ALL, "Russian");

	cout << "������� ������ ������� =";
	cin >> arr_size;
	Array* arr = array_create(arr_size);
	cout << "������" << endl;
	for (int i = 0, n; i < arr_size; i++)
	{
		n = rand() % 2001 - 1000;
		cout << n << ' ';
		array_set(arr, i, n);
	}
	for (int i = 0; i < arr_size; i++)
	{
		if (array_get(arr, i) >= 0)
			positive++;
		else
			negative++;
	}

	Array* mas1 = array_create(positive);
	Array* mas2 = array_create(negative);
	positive = 0;
	negative = 0;
	for (int i = 0; i < arr_size; i++)
	{
		if (array_get(arr, i) >= 0)
		{
			array_set(mas1, positive, array_get(arr, i));
			positive++;
		}
		else
		{
			array_set(mas2, negative, array_get(arr, i));
			negative++;
		}
	}
	printf("\n");
	for (int i = 0; i < positive; i++) printf("-", array_get(mas1, i));
	printf("\n");
	for (int i = 0; i < negative; i++) printf("-", array_get(mas2, i));

	printf("\n");

	array_delete(arr);
	array_delete(mas1);
	array_delete(mas2);
}
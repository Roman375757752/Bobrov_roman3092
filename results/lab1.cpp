﻿#include <iostream>
#include "array.h"

using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	cout << "Введите количество элементов массива:" << endl;
	int n;
	int k = 0;
	cin >> n;
	while (n <= 0)
	{
		cout << "Количество элементов в массиве должно быть положительным"<<endl;
		cin >> n;
	}
	Array* array = array_create(n);
	for (int i = 0; i < n; i++) //вводим динамический массив
	{
		Data x;
		cin >> x;
		array_set(array, i, x);
	}
	cout << "=========================" << endl;
	cout << "Введенный массив:" << endl;
	for (int i = 0; i < n; i++)//выводим введенный массив 
	{
		cout << array_get(array,i) << endl;
	}
	for (int i = 0; i < n - 1; i++) //делаем условие проверки
	{
		if ((array_get(array,i) >= 0 && array_get(array,i+1) < 0) || (array_get(array, i) < 0 && array_get(array, i + 1) >= 0)) //изменения
			k++;
	}
	cout << "Массив меняет знак: " << k << " раза" << endl;
	array_delete(array); //очищаем память
}

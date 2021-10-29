#include "pch.h"
#include "array.h"
#include <iostream>
#include <cstdlib>
#include<ctime>

int main()
{
	srand(time(NULL));
	setlocale(LC_ALL, "Russian");
	

	int size;
	std::cout << "������� ���������� ���������: ";
	std::cin >> size;
	if (size > 0)
	{
		Array* arr = array_create(size);
		Array* arr2 = array_create(size);

		int j = -1;
		for (int i = 0; i < size; i++)
		{
			array_set(arr, i, rand());
			std::cout << "������� ����� " << (i + 1) << ": " << array_get(arr, i) << std::endl;
			if (array_get(arr, i) % 2 == 0)
			{
				j++;
				array_set(arr2, j, array_get(arr, i));

			}
		}
		if (j > -1)
		{
			for (int i = 0; i <= j; i++)
			{
				std::cout << "������� ������� 2 ����� " << (i + 1) << ": " << array_get(arr2, i) << std::endl;
			}
		}
		else
		{
			std::cout << "׸���� ��������� � ������� ��� " << std::endl;
		}


		array_delete(arr);
		array_delete(arr2);
	}
	else
	{
		std::cout << "�� ��������� ������ ������� " << std::endl;
	}
	return 0;
}
//
// Created by 1656960 on 25.10.2021.
//
#include <iostream>
#include <climits>
#include <ctime>
#include "array.h"
int main()
{
    srand(time (0));
    int a = 0, b = 0;
    std::cin >> a >> b;
    Array* arr = array_create(10);
    for (int i = 0; i <  array_size(arr); i++)
    {
        array_set(arr, i, rand() % 1000 - 100);
    }

    for(int i = 0; i <  array_size(arr); i++)
    {
        if(array_get(arr,i) >= a && array_get(arr,i) <= b)
        {
            array_set(arr, i, 0);
        }
    }
    for (int i = 0; i < array_size(arr); i++)
    {
        std::cout << array_get(arr, i) << " ";
    }
    array_delete(arr);
}
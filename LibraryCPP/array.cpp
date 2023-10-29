#include <iostream>
#include "array.h"

// create array
Array* array_create(size_t size)
{
    Array* arr = new Array;

    // �������� ������ ��� ������� � ��������� ��������� � ������� Array
    arr->dynamArray = new int[size];
    arr->size = size;

    return arr;
}

// delete array, free memory
void array_delete(Array* arr)
{
    delete[] arr->dynamArray;
    delete arr;
}


// returns specified array element
Data array_get(const Array* arr, size_t index)
{
    return arr->dynamArray[index];
}

// sets the specified array element to the value
void array_set(Array* arr, size_t index, Data value)
{
    arr->dynamArray[index] = value;
}

// returns array size
size_t array_size(const Array* arr)
{
    return arr->size;
}

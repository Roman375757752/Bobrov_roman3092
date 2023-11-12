#include "array.h"

struct Array
{
   Data* data;
   size_t size;

   Array(size_t size) {
       this->size = size;
       this->data = new Data[size];
   }

   ~Array() {
       delete[] data;
   }
};

// create array
Array *array_create(size_t size)
{
   return new Array(size);
}

// delete array, free memory
void array_delete(Array *arr)
{
   delete arr;
}

// returns specified array element
Data array_get(const Array *arr, size_t index)
{
   if (index < arr->size) return arr->data[index];
   else return (Data)0;
}

// sets the specified array element to the value
void array_set(Array *arr, size_t index, Data value)
{
   if (index < arr->size) arr->data[index] = value;
}

// returns array size
size_t array_size(const Array *arr)
{
   return arr->size;
}


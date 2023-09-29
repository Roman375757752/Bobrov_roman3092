
#include "array.h"
#include <iostream>
using namespace std;




int first_task(const Array* arr,int a, int b) //������ ������� 
{
    int sum=0;
    for (size_t i=0; i<array_size(arr);i++)
    { 
      
       if (array_get(arr, i) % a == 0 || array_get(arr, i) % b == 0)
       {
           sum += array_get(arr, i);
       }
           
    }
    return sum;

}


size_t second_task(const Array* arr)
{
    int sum = 0;
    int summax = 0;
    int counter = 5;

    size_t size = array_size(arr);

    if (size < 5)
    {
        cout << "Array size is less or equal to 5 elements!" << endl;
        return 0;
        
    }
    else if (size == 5)
    {
        for (size_t i = 0; i < 5; i++)
        {
            sum += array_get(arr, i);
        }
        summax = sum;
    }
    else if (size > 5)
    {
        for (size_t i = 0; i < 5; i++)
        {
            sum += array_get(arr, i);
        }

        for (size_t i = 5; i < size; i++)
        {
            if (sum > summax)
            {
                summax = sum;
            }
            if (array_get(arr, i) > array_get(arr, i - 5))
            {

                sum += array_get(arr, i);
                sum -= array_get(arr, i - 5);

                counter++;
            }
            else
            {
                if (counter <= 10)
                {
                    sum += array_get(arr, i);
                    sum -= array_get(arr, i - 5);
                    counter++;
                    continue;
                }
                sum += array_get(arr, i - 5);
                sum -= array_get(arr, i);

            }

        }
    }
    return summax;
}


int main()
{
    
    setlocale(LC_ALL, "Russian");
    size_t sizeofArr;
    int a, b;
    cout << "Enter size of array:";
    cin >> sizeofArr;   
    cout << endl;
    Array* arr= array_create(sizeofArr); //�������� ���������� �������

   
    srand(time(NULL) % 100);            //��������� ��������� �����
    for (size_t i = 0; i < array_size(arr); i++)
    {
        array_set(arr, i, rand());
    }
    cout << "Enter a and b: ";  //���� ����� � � b
    cin >> a>> b;
    cout << endl;


    cout << "First task answer: "<<first_task(arr, a, b)<<endl; //����� ����������� ������� �������
    array_delete(arr); //�������� �������

    

    cout << "Enter size of array: ";
    cin >> sizeofArr;  //���� ������
    Array* array = array_create(sizeofArr); //�������� ���������� �������

    for (size_t i = 0; i < array_size(array); i++)
    {
        array_set(array, i, rand());
    }
    cout << "Second task answer: " << second_task(array) << endl;; //������ �������
 
    array_delete(array);   //�������� �������
    
    return 0;
}
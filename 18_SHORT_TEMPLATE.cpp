#include <iostream>
using namespace std;

template <typename T>
void ShortArry(T arry[], int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arry[i] > arry[j])
            {
                T temp = arry[i];
                arry[i] = arry[j];
                arry[j] = temp;
            }
        }
    }
}

template <typename T>
void printArray(T arry, int size)
{
    for (int i = 0; i < size; ++i)
    {
        cout << arry[i] << " ";
    }
    cout << endl;
}

int main()
{
    int Array[5] = {4, 2, 9, 1, 5};
    // float Array[5] = {4.1, 2.4, 9.8, 1.2, 5.4};
    // char Array[5] = {'z', 'a', 'e', 'r', 'q'};

    cout << "befor short array: ";
    printArray(Array, 5);
    ShortArry(Array, 5);
    cout << "Sorted array: ";
    printArray(Array, 5);
    return 0;
}

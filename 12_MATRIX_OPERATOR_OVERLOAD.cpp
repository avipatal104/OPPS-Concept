#include <iostream>
using namespace std;

class Matrix1D
{
    int Data[5];

public:
    Matrix1D(int arr[])
    {
        for (int i = 0; i < 5; i++)
        {
            Data[i] = arr[i];
        }
    }

    void printData(void)
    {
        cout << "ArryData : ";
        for (char i = 0; i < 5; i++)
        {
            cout << Data[i] << ' ';
        }
        cout << endl;
    }

    Matrix1D operator+(const Matrix1D &other)
    {
        cout << "Addition of 1D matrix using Operator Overloading : " << endl;
        for (int i = 0; i < 5; i++)
        {
            cout << Data[i] + other.Data[i] << ' ';
        }
        cout << endl;
    }

    Matrix1D operator*(const Matrix1D &other)
    {
        cout << "Multiplication of 1D matrix using Operator Overloading : " << endl;
        for (int i = 0; i < 5; i++)
        {
            cout << Data[i] * other.Data[i] << ' ';
        }
        cout << endl;
    }
};

int main()
{
    int Arry[5] = {10, 20, 30, 40, 50};
    Matrix1D M1(Arry);
    Matrix1D M2(Arry);

    M1.printData();
    M2.printData();
    M1 + M2;
    M1 *M2;

    return 0;
}

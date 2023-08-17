#include <iostream>
using namespace std;

class Calculator
{
public:
    int add(int a, int b)
    {
        cout << "addition of int : ";
        return a + b;
    }
    float add(float a, float b)
    {
        cout << "addition of float : ";
        return a + b;
    }
    int subtract(int a, int b)
    {
        cout << "subtract of int : ";
        return a - b;
    }

    float subtract(float a, float b)
    {
        cout << "subtract of float : ";
        return a - b;
    }

    int multiply(int a, int b)
    {
        cout << "multiplication of int : ";
        return a * b;
    }

    float multiply(float a, float b)
    {
        cout << "multiplication of float : ";
        return a * b;
    }

    int divide(int a, int b)
    {
        cout << "divide of int : ";
        if (b != 0)
        {
            return a / b;
        }
        else
        {
            exit(1);
        }
    }

    float divide(float a, float b)
    {
        cout << "divide of float : ";
        if (b != 0)
        {
            return a / b;
        }
        else
        {
            exit(1);
        }
    }
};

int main()
{
    Calculator Cal;

    int A = 20;
    int B = 10;
    float AA = 20.1;
    float BB = 10.3;
    cout << Cal.add(A, B) << endl;
    cout << Cal.subtract(A, B) << endl;
    cout << Cal.multiply(A, B) << endl;
    cout << Cal.divide(A, B) << endl;

    cout << endl;

    cout << Cal.add(AA, BB) << endl;
    cout << Cal.subtract(AA, BB) << endl;
    cout << Cal.multiply(AA, BB) << endl;
    cout << Cal.divide(AA, BB) << endl;

    return 0;
}

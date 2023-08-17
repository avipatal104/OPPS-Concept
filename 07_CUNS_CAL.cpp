#include <iostream>
using namespace std;

class Calculator
{
    float a;
    float b;

public:
    Calculator(float i, float j)
    {
        a = i;
        b = j;
    }

    float Add()
    {
        return a + b;
    }
    float Sub()
    {
        return a - b;
    }
    float Mul()
    {
        return a * b;
    }
    float Div()
    {
        return a / b;
    }
};

int main()
{
    float a1, a2;
    cout << "Enter 2 number : ";
    cin >> a1 >> a2;
    Calculator Cl(a1, a2);

    cout << "Addition : " << Cl.Add() << endl;
    cout << "Subtraction : " << Cl.Sub() << endl;
    cout << "Division : " << Cl.Div() << endl;
    cout << "Multiplication : " << Cl.Mul() << endl;

    return 0;
}
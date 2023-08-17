#include <iostream>
using namespace std;

int multiply(int a, int b)
{
    return (a * b);
}

int cubic(int a)
{
    return (a * a * a);
}

int main()
{
    int a, b;
    cout << "Enter a number for cubic : ";
    cin >> a;
    cout << "cubic of " << a << " : " << cubic(a) << endl;

    cout << "Enter 2 number for multiplication : ";
    cin >> a >> b;

    cout << "Multiplication of " << a << " and " << b << " : " << multiply(a, b) << endl;

    return 0;
}
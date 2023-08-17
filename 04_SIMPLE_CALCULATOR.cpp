#include <iostream>
using namespace std;

class Calculator
{
    int a;
    int b;

public:
    void inputData(int i, int j)
    {
        a = i;
        b = j;
    }
    void add()
    {
        cout << a << " + " << b << " = " << a + b << endl;
    }
    void sub()
    {
        cout << a << " - " << b << " = " << a - b << endl;
    }
    void mul()
    {
        cout << a << " * " << b << " = " << a * b << endl;
    }
    void divi()
    {
        cout << a << " / " << b << " = " << a / b << endl;
    }
};

int main()
{
    Calculator C1;
    C1.inputData(10, 4);
    C1.add();
    C1.sub();
    C1.mul();
    C1.divi();
    return 0;
}

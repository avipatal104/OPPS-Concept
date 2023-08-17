#include <iostream>
using namespace std;

class Data
{
    int a;

public:
    Data(int i) : a(i) {}
    void PrintVal(void)
    {
        cout << a << endl;
    }

    friend int Swap(Data &a, Data &b);
};
int Swap(Data &a, Data &b)
{
    cout << "This is Swap function." << endl;
    a.a = a.a + b.a;
    b.a = a.a - b.a;
    a.a = a.a - b.a;
}
int main()
{
    Data A1(50);
    Data A2(20);

    cout << "Value of A1 : ";
    A1.PrintVal();
    cout << "Value of A2 : ";
    A2.PrintVal();

    Swap(A1, A2);

    cout << "Value of A1 : ";
    A1.PrintVal();
    cout << "Value of A2 : ";
    A2.PrintVal();

    return 0;
}

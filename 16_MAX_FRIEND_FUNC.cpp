#include <iostream>
using namespace std;

class Data
{
    int a;

public:
    Data(int i) : a(i) {}

    friend int Max(Data a, Data b);
};
int Max(Data a, Data b)
{
    return (a.a > b.a) ? a.a : b.a;
}
int main()
{
    Data A1(50);
    Data A2(20);

    cout << "Max Number from both class is : " << Max(A1, A2);

    return 0;
}

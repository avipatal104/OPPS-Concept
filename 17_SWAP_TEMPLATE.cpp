#include <iostream>
using namespace std;

template <typename T, typename Y>
void SwapNum(T &i, Y &j)
{
    i = i + j;
    j = i - j;
    i = i - j;
}

int main()
{
    int a = 10;
    float b = 20;

    cout << "before swap : a = " << a << " b = " << b << endl;
    SwapNum(a, b);
    cout << "after swap : a = " << a << " b = " << b << endl;
    return 0;
}

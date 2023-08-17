#include <iostream>
using namespace std;

template <typename T>
void FindArea(T a)
{
    cout << "Area of circle : " << (3.14 * a * a) << endl;
}
template <typename T>
void FindArea(T a, T b)
{
    cout << "Area of Rectangle : " << a * b << endl;
}
template <typename T, typename Q, typename P>
void FindArea(T a, Q b, P c)
{
    cout << "Area of Triangle : " << a * b * c << endl;
}

int main()
{
    FindArea(4);
    FindArea(3, 4);
    FindArea(0.5, 3, 4);
    return 0;
}

#include <iostream>
using namespace std;

class Person
{
protected:
    string Name;
    int Age;

public:
    void detailSet(void)
    {
        cout << "Enter name : ";
        cin >> Name;
        cout << "Enter age : ";
        cin >> Age;
    }
    void detailPrint(void)
    {
        cout << "Name : " << Name << endl;
        cout << "Age : " << Age << endl;
    }
};

class Student : public Person
{
    int Percentage;

public:
    void Set(void)
    {
        detailSet();
        cout << "Enter Percentage : ";
        cin >> Percentage;
    }
    void Print(void)
    {
        cout << "I am Student" << endl;
        detailPrint();
        cout << "Percentage : " << Percentage << endl;
    }
};

class Teacher : public Person
{
    int salary;

public:
    void Set(void)
    {
        detailSet();
        cout << "Enter salary : ";
        cin >> salary;
    }
    void Print(void)
    {
        cout << "I am Teacher" << endl;
        detailPrint();
        cout << "salary : " << salary << endl;
    }
};

int main()
{
    Student S1;
    Teacher T1;

    cout << "Enter Student Detail." << endl;
    S1.Set();

    cout << "Enter Teacher Detail." << endl;
    T1.Set();

    cout << endl
         << "Student Detail." << endl;
    S1.Print();
    cout << "Teacher Detail." << endl;
    T1.Print();

    return 0;
}

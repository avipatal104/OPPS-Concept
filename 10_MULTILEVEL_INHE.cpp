#include <iostream>
using namespace std;

class Students
{
protected:
    int RollNum;

public:
    Students(int Rol) : RollNum(Rol) {}
};

class Test : public Students
{
protected:
    int Marks1;
    int Marks2;

public:
    Test(int Rol, int M1, int M2) : Students(Rol), Marks1(M1), Marks2(M2) {}
};

class Result : public Test
{
    int totalMarks;

public:
    Result(int Rol, int M1, int M2) : Test(Rol, M1, M2)
    {
        totalMarks = M1 + M2;
    }

    void DisplayData()
    {
        cout << "Rollnumber : " << RollNum << endl;
        cout << "Subject 1 Marks : " << Marks1 << endl;
        cout << "Subject 2 Marks : " << Marks2 << endl;
        cout << "totalMarks : " << totalMarks << endl;
    }
};

int main()
{
    Result R1(1, 50, 70);
    R1.DisplayData();
    return 0;
}

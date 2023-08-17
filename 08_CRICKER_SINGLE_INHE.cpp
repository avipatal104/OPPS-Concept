#include <iostream>
using namespace std;

class Cricketer
{
protected:
    string name;
    int matchPlayed;
    int totalRun;
    int AverageRun;
    int bestPerfomance;
};

class Batsman : public Cricketer
{
public:
    void inputData(void)
    {
        cout << "Enter player name : ";
        cin >> name;
        cout << "Enter matches played by Batsman : ";
        cin >> matchPlayed;
        cout << "Enter totalRun of Batsman : ";
        cin >> totalRun;
        cout << "Enter best score of Batsman : ";
        cin >> bestPerfomance;
    }
    void displayData(void)
    {
        cout << "Player name : " << name << endl;
        cout << "Matches played : " << matchPlayed << endl;
        cout << "Total runs : " << totalRun << endl;
        AverageRun = totalRun / matchPlayed;
        cout << "Average Run : " << AverageRun << endl;
        cout << "best performance : " << bestPerfomance << endl;
    }
};

int main()
{
    Batsman b1;
    b1.inputData();
    b1.displayData();
    return 0;
}

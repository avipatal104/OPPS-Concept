#include<iostream>
using namespace std;

long StartingNo = 12340000;

class BankAccount {
    string Name;
    long AccountNo;
    string AccountType;
    float Balance;
    float LastTran[5] = {0, 0, 0, 0, 0};
    
    void AddHistory(float Amount)   {
        for(int i = 4; i >= 1;i--)    {
            LastTran[i] = LastTran[i-1];
        }
        LastTran[0] = Amount;
    }
public:
    
    void AssignValue(string name, string type, float balance)  {
        Name = name;
        AccountNo = ++StartingNo;
        AccountType = type;
        Balance = balance;
    }
    void deposit(float Amount)  {
        
        if(Amount > 0)  {
            Balance += Amount;
            AddHistory(Amount);
            cout<<"Amount of "<< Amount <<" deposit successfully\nAvailable balance : "<<Balance<<endl;
        }   else    {
            cout<<"Amount should be gretter then 0"<<endl;
        }
    }
    void withdrowAmount(float Amount)   {
        if(Amount > 0)  {
            if(Balance > Amount)    {
                Balance -= Amount;
                AddHistory(0 - Amount);
                cout << "Amount of "<<Amount<< " withdrow successfully\nAvailable balance : "<<Balance<<endl;
            }   else    {
                cout << "Sorry, your expected amount is morethan your balance"<<endl;
            }
        }   else    {
            cout<<"Amount should be gretter then 0"<<endl;
        }
    }
    void displayData(void) {
        cout << "Name : "<< Name << endl;
        cout << "Account No. : "<< AccountNo << endl;
        cout << "Account Type : " << AccountType << endl;
        cout << "Balance : " << Balance << endl << endl;
    }
    
    void ShowLastTran(void) {
        cout << "Last Transaction of Account No. "<< AccountNo << endl;
        for(int i = 0; i < 5;i++)   {
            cout << LastTran[i] << ", ";
        }
        cout<<endl;
    }
    
};

int main()  {
    BankAccount Account1[10];
    Account1[0].AssignValue("Avi Patel", "Savings", 10000);
    Account1[1].AssignValue("Vishal Patel", "Savings", 20000);
    
    Account1[0].deposit(2345);
    Account1[0].withdrowAmount(4321);
    Account1[0].displayData();
    Account1[0].ShowLastTran();
    Account1[1].ShowLastTran();
    Account1[1].displayData();
    
    return 0;
}
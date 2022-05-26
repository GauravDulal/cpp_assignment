//  Create a class Account with data members acc no, balance, and
// min_balance(static).
//  Include methods for reading and displaying values of objects
//  Define static member function to display min_balance
//  Create array of objects to store data of 5 accounts and read and display
// values of each object.

#include <iostream>
using namespace std;

class Account
{
    public:
    int acc_no, balance;
    static int min_balance;
    
    void getData()
    {
        cout<<"--------------------------------------"<<endl;
        cout << "Enter acc no, balance" << endl;
        cin >> acc_no >> balance;
    }
    void display()
    {
        if(balance>=min_balance){
        cout<<"---------------Acc Details------------"<<endl;
        cout << "Acc no: " << acc_no << endl;
        cout << "Balance: " << balance << endl;
        }
        else{
            cout<<"Insufficient Balance"<<endl;
        }
    }
    static void minBalance(){
        cout<<"Enter min balance"<<endl;
        cin>>min_balance;
    }
    static void dispMinBalance(){
        cout<<"minimum balance: "<<min_balance<<endl;
    }
};
int Account::min_balance = 0;
int main()
{
    Account obj[5];
    Account::minBalance();
    Account::dispMinBalance();
    for (int i = 0; i <= 5; i++)
    {
        obj[i].getData();
        obj[i].display();        
    }
    return 0;
}
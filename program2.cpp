// Design a class to represent a bank account with data members
// name, account-number, account-type, and balance. Define functions to assign
// initial values, to deposit an amount, to withdraw an amount after checking
// balance, and to display the name and balance. 


#include<iostream>
using namespace std;

class account{
    int acc_number, balance;
    string name, type;
    public:
    int getData(){
        cout<<"Enter name , acc number , type , balance"<<endl;
        cin>>name>>acc_number>>type>>balance;
    }
    int deposit(){
        int check, deposit;
        cout<<"Do you want to deposit money?"<<endl;
        cout<<"Press 0 for 'no' or 1 for 'yes'"<<endl;
        cin>>check;
        if(check == 1){
            cout<<"Enter amount you want to deposit"<<endl;
            cin>>deposit;
            balance += deposit;
        }    
    }
    void withdraw(){
        int check, withdraw;
        cout<<"Do you want to withdraw money?"<<endl;
        cout<<"Press 0 for 'no' or 1 for 'yes'"<<endl;
        cin>>check;
        if(check == 1){
            cout<<"Enter amount you want to withdraw"<<endl;
            cin>>withdraw;
            balance -= withdraw;
        }   
    }
    void displayInfo(){
        cout<<"Name = "<<name<<endl;
        cout<<"Balance = "<<balance<<endl;
    }
};

int main(){
    account a1;
    a1.getData();
    a1.deposit();
    a1.withdraw();
    a1.displayInfo();
    return 0;
}
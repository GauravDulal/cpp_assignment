// Write a C++ program to represent the above inheritance scheme. Also write a
// main() function to test the classes, Manager and Computer Operator, by
// creating their objects, taking input and displaying the corresponding values

#include <iostream>
using namespace std;
class Employee
{
    int id;
    string name;

public:
    void getData()
    {
        cout << "Enter name and id:" << endl;
        cin >> name >> id;
    
    }
    void putData()
    {
        cout << "Name: " << name << endl;
        cout << "ID: " << id << endl;
        cout<<"---------------------------"<<endl;
    }
};
class Manager : public Employee
{
    string department;

public:
    void getData()
    {
        Employee::getData();
        cout << "Enter the department" << endl;
        cin >> department;
        cout<<"---------------------------"<<endl;
    }
    void putData()
    {
        Employee::putData();
        cout << "Deparment: " << department << endl;
        cout<<"---------------------------"<<endl;        
    }
};
class ComputerOperator : public Employee
{
    int typing_speed;

public:
    void getData()
    {
        Employee::getData();
        cout << "Enter your typing speed" << endl;
        cin >> typing_speed;
        cout<<"---------------------------"<<endl;
    }
    void putData()
    {
        Employee::putData();
        cout << "Typing speed: " << typing_speed << endl;
        cout<<"---------------------------"<<endl;
    }
};
int main()
{
    Manager obj1;
    obj1.getData();
    obj1.putData();
    ComputerOperator obj2;
    obj2.getData();
    obj2.putData();
    return 0;
}
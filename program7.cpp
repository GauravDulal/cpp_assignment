//  Create a class called Employee with data member Code, Name,
// Address and Salary. Create a constructor to initialize the member of the class.
// Also create another constructor so that we can create an object from another
// object. Define member function display( ) to display the information of the
// class.


#include<iostream>
using namespace std;

class Employee{
    int code , salary;
    string name , address;
    public:
        Employee(int c , int s, string n, string add){
            code = c;
            salary = s;
            name = n;
            address = add;
        }
        Employee(){
            Employee obj(15, 200000, "Amber", "UK");
            obj.display();
        }
        void display(){
            cout<<"The employee code is: "<<code<<endl;
            cout<<"The name of the employee is: "<<name<<endl;
            cout<<"The salary is: "<<salary<<endl;
            cout<<"The address is "<<address<<endl; 
            cout<<"------------------------------"<<endl;
        }
};
int main(){
    Employee o1(12, 100000, "Johhny", "USA");
    o1.display();
    Employee o2;
    return 0;
}
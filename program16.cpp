//  Write a program to swap variables of two classes using friend
// function

#include <iostream>
using namespace std;
class class2;
class class1
{
    private:
    int a;

public:
    void setValue()
    {
        cout << "Enter the value for 1st number: " << endl;
        cin >> a;
    }
    friend void max(class1, class2);
};
class class2
{
    private:
    int b;

public:
    void setValue()
    {
        cout << "Enter the value for 1st number: " << endl;
        cin >> b;
    }
    friend void max(class1, class2);
};
void max(class1 o1, class2 o2){
    int temp;
    cout<<"Before swapping: "<<endl;
    cout<<"x = "<<o1.a<<endl;
    cout<<"x = "<<o2.b<<endl;
    temp = o1.a;
    o1.a = o2.b;
    o2.b = temp;
    cout<<"After swapping: "<<endl;
    cout<<"x = "<<o1.a<<endl;
    cout<<"y = "<<o2.b<<endl;
}
int main()
{
    class1 obj1;
    class2 obj2;
    obj1.setValue();
    obj2.setValue();
    max(obj1, obj2);
    return 0;
}
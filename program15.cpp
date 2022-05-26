//  Create classes called class1 and class2 with each having one
// private member. Add member function to set a value (say setvalue) on each
// class. Add one more function max( ) that is friendly to both classes. max( )
// function shound compare two private member of two classes and show
// maximum among them. Create one-one object of each class then set a value on
// them. Display the maximum number among them.

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
    if(o1.a > o2.b ){
        cout<<"The greatest number is: "<<o1.a<<endl;
    }
    else{
        cout<<"The greatest number is: "<<o2.b<<endl;
    }
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
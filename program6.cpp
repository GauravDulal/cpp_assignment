//  Write a program to input two vectors coordinates from a base class
// named ‘Base’. Class ‘Derived’ inherits all the properties of class Base. Class
// ‘Derived’ must contain a function named add_vector( ) that add the two vectors
// input from the base class and finally display the result from a function
// display() that is friend with the base class.


#include <iostream>
using namespace std;
class Base
{
public:
    int x;
    int y;
    void getData()
    {
        cout << "Enter x and y coordinates" << endl;
        cin >> x >> y;
    }
    friend void display(Base);
};
class Derived:public Base{
    public:
        void add_vector(Base &o1, Base &o2){
            o1.x+=o2.x;
            o1.y+=o2.y;
        }
};
void display(Base obj1){
    cout<<"the sum of vector is:"<<endl;
    cout<<obj1.x<<"i + "<<obj1.y<<"j"<<endl;
}

int main()
{
    Base obj1, obj2;
    Derived obj;
    obj1.getData();
    obj2.getData();
    obj.add_vector(obj1, obj2);
    display(obj1);
    return 0;
}
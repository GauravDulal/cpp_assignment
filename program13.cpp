// Write a program to add two complex numbers using the concept
// of constructor.

#include <iostream>
using namespace std;
class A
{
    int x, y;

public: 
    A(){

    }
    A(int a, int b)
    {
        x = a;
        y = b;
    }
    int add(A o1, A o2)
    {
        cout<<"-------------------------------------------------------------------------------------------"<<endl;
        cout << "The complex numbers are: " << o1.x << "+i" << o1.y << " and " << o2.x << "+i" << o2.y << endl;
        o1.x += o2.x;
        o1.y += o2.y;
        cout<<"--------------------------------------"<<endl;
        cout << "The final complex number is:" << o1.x << "+i" << o1.y << endl;
    }
};
int main()
{
    A obj1(4, 5), obj2(7, 8), obj3;
    obj3.add(obj1, obj2);
    return 0;
}
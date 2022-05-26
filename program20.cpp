// Write a program to overload multiplication operator(*) showing
// the multiplication of two objects.

#include <iostream>
using namespace std;
class A
{
    int x, y;
    public:
        A(){

        }
        void getData(){
            cout<<"Enter two numbers: "<<endl;
            cin>>x>>y;
        }
        int operator *(A o1){
            x *= o1.x;
            y *= o1.y;
            cout<<"Multiplication of two objects are:"<<endl;
            cout<<"x = "<<x<<endl;
            cout<<"y = "<<y<<endl;
        }
};

int main()
{
    A obj1, obj2;
    obj1.getData();
    obj2.getData();
    obj1*obj2;
    return 0;
}
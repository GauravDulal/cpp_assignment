// Write a program to add two complex numbers using friend
// function.

#include <iostream>
using namespace std;
class A
{
    int x, y;

public:
    A()
    {
    }
    void setValue()
    {
        cout << "Enter x and y of complex number: " << endl;
        cin >> x>> y;
    }
    friend void max(A, A);
};
void max(A o1, A o2)
{
    o1.x += o2.x;
    o1.y += o2.y;
    cout << "The final complex number is: " << endl;
    cout << o1.x << "+i" << o1.y << endl;
}
int main()
{
    A obj1, obj2;
    obj1.setValue();
    obj2.setValue();
    max(obj1, obj2);
    return 0;
}
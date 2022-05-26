// Write a program to add time in hours and minutes of two
// different objects using friend function

#include <iostream>
using namespace std;
class A
{
    int hh, mm;

public:
    A()
    {
    }
    void setValue()
    {
        cout << "Enter time in hour and minute: " << endl;
        cin >> hh >> mm;
    }
    friend void max(A, A);
};
void max(A o1, A o2)
{
    o1.hh += o2.hh;
    o1.mm += o2.mm;
    if (o1.mm > 60)
    {
        o1.hh += 1;
        o1.mm -= 60;
        cout << "The time is: " << endl;
        cout << o1.hh << ":" << o1.mm << endl;
    }
}
int main()
{
    A obj1, obj2;
    obj1.setValue();
    obj2.setValue();
    max(obj1, obj2);
    return 0;
}
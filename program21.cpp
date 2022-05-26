// Write a program to add two complex numbers. Your program
// should have three objects. Each object contains two attributes (ie. real and
// imaginary part). Now add each attribute and save them into third object
// separately. Use the concept of ‘+’ operator overloading

#include <iostream>
using namespace std;
class complex
{
    int real, ima;

public:
    complex()
    {
    }
    complex(int r, int i)
    {
        real = r;
        ima = i;
    }
    friend complex operator+(complex o1, complex o2);
    void displayData()
    {
        {
            cout << "The final complex number is: " << endl;
            cout <<real << "+i" << ima << endl;
        }
    }
};
complex operator+(complex o1, complex o2)
{
    o1.real+=o2.real;
    o1.ima+=o2.ima;
    return o1;
}
int main()
{
    complex obj1(4, 4), obj2(2, 4), obj3;
    obj3 = obj1 + obj2;
    obj3.displayData();
    return 0;
}
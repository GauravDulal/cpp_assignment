// Write a program to find the sum and difference of any two
// complex numbers by overloading ‘+’ and ‘-‘ operator.

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
    friend complex operator-(complex o1, complex o2);
};
complex operator+(complex o1, complex o2)
{
    o1.real += o2.real;
    o1.ima += o2.ima;
    {
        cout << "The added complex number is: " << endl;
        cout << o1.real << "+i" << o1.ima << endl;
    }
}
complex operator-(complex o1, complex o2)
{
    o1.real -= o2.real;
    o1.ima -= o2.ima;
    {
        cout << "The sunstracted complex number is: " << endl;
        cout << o1.real << "+i" << o1.ima << endl;
    }
}
int main()
{
    complex obj1(4, 10), obj2(2, 4);
    obj1+obj2;
    obj1-obj2;
    return 0;
}
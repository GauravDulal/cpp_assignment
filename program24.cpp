// Write a program to overload ‘+’ operator to concatenate two
// strings

#include <iostream>
#include<cstring>
using namespace std;
class A
{
    char a[30];
public:
    void getData()
    {
        cout << "enter a string: " << endl;
        cin.getline(a, 30);
    }
    friend A operator+(A o1, A o2);
};
A operator+(A o1, A o2)
{
    strcat(o1.a, o2.a);
    cout<<"The sum of strings is:"<<o1.a<<endl;
}
int main()
{
    A obj1, obj2;
    obj1.getData();
    obj2.getData();
    obj1+obj2;
    return 0;
}
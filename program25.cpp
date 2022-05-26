// Write a program to add two Times expressed in hours, minutes
// and seconds using operator overloading.

#include <iostream>
using namespace std;
class time
{
    int hour, minute, second;

public:
    void getData()
    {
        cout << "Enter hour, minute and second" << endl;
        cin >> hour >> minute >> second;
    }
    friend time operator+(time o1, time o2);
};
time operator+(time o1, time o2)
{
    o1.hour += o2.hour;
    o1.minute += o2.minute;
    o1.second += o2.second;
    if (o1.minute > 60)
    {
        o1.hour += 1;
        o1.minute -= 60;
        cout << "The added time is: " << endl;
        cout << o1.hour << ":" << o1.minute << ":" << o1.second << endl;
    }
    else
        {
            cout << "The added time is: " << endl;
            cout << o1.hour << ":" << o1.minute << ":" << o1.second << endl;
        }
}
int main()
{
    time obj1, obj2;
    obj1.getData();
    obj2.getData();
    obj1+obj2;
    return 0;
}
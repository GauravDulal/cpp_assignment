// Create a class time having hour, minute and second as data
// members. The constructor is used to initialize these members. Define a
// function add that takes two class objects as arguments and add them
// respectively then display the aggregate result

#include <iostream>
using namespace std;
class time
{
    int hour, minute, second;

public:
    time()
    {
    }
    time(int h, int m, int s)
    {
        hour = h;
        minute = m;
        second = s;
    }
    int add(time t1, time t2)
    {
        t1.hour += t2.hour;
        t1.minute += t2.minute;
        t1.second += t2.second;
        if (t1.minute > 60)
        {
            t1.hour += 1;
            t1.minute -= 60;
            cout << "The time is:" << endl;
            cout << t1.hour << ":" << t1.minute << ":" << t1.second << endl;
        }
        else
        {
            cout << "The time is:" << endl;
            cout << t1.hour << ":" << t1.minute << ":" << t1.second << endl;
        }
    }
};
int main()
{
    time obj1(4, 50, 10), obj2(2, 30, 15);
    time obj;
    obj.add(obj1, obj2);
    return 0;
}
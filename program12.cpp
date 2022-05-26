// Write base class that asks the user to enter Time (hour, minute
// and second) and derived class adds the Time of its own with the base. Finally,
// make third class that is friend of derived and calculate the difference of base
// class time and its own time.

#include <iostream>
using namespace std;
class Friend;
class Base
{
public:
    Base(){

    }
    int hour, minute, second;
    int getData()
    {
        cout<<"--------------------------------------"<<endl;
        cout << "Enter hour, minute and second for base: " << endl;
        cin >> hour >> minute >> second;
    }
    friend class Friend;
};
class Derived : public Base
{
    int hour1, minute1, second1;

public:
    int getData()
    {
        cout<<"--------------------------------------"<<endl;
        cout << "Enter hour, minute and second for derived: " << endl;
        cin >> hour1 >> minute1 >> second1;
    }
    void add(Base obj)
    {
        obj.getData();
        obj.hour += hour1;
        obj.minute += minute1;
        obj.second += second1;
        cout<<"--------------------------------------"<<endl;
        cout << "Hour: " << obj.hour << endl;
        cout << "Minute: " << obj.minute << endl;
        cout << "Second: " << obj.second << endl;
    }
};
class Friend
{
    int hour2, minute2, second2;

public:
    int getData()
    {
        cout<<"--------------------------------------"<<endl;
        cout << "Enter hour, minute and second for friend: " << endl;
        cin >> hour2 >> minute2 >> second2;
    }
    void sub(Base obj)
    {
        obj.getData();
        obj.hour -= hour2;
        obj.minute -= minute2;
        obj.second -= second2;
        cout<<"--------------------------------------"<<endl;
        cout << "Hour: " << obj.hour << endl;
        cout << "Minute: " << obj.minute << endl;
        cout << "Second: " << obj.second << endl;
    }

};
int main()
{
    Base obj;
    Derived o1;
    o1.getData();
    o1.add(obj);
    Friend o2;
    o2.getData();
    o2.sub(obj);
    return 0;
}
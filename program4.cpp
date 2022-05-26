// Write a program according to the specification given below:
//  Create a class Teacher with data members, tid & subject and member
// functions for reading and displaying data members.
//  Create another class Staff with data members, sid & position, and
// member functions for reading and displaying for data members.
//  Derive a class Coordinator from the Teacher and Staff and the class must
// have its own data member department and member functions for reading
// and displaying data members.
//  Create two objects of the Coordinator class and read and display their
// details. 

#include <iostream>
using namespace std;
class Teacher
{
    int tid;
    string subject;

public:
    void getData(int id, string s)
    {
        tid = id;
        subject = s;
    }
    void displayData()
    {
        cout << "The tid is: " << tid << endl;
        cout << "The subject: " << subject << endl;
    }
};
class Staff
{
    int sid;
    string position;

public:
    void getData(int i, string p)
    {
        sid = i;
        position = p;
    }
    void displayData()
    {
        cout << "The sid is: " << sid << endl;
        cout << "The position: " << position << endl;
    }
};
class Coordinator : public Teacher, public Staff
{
    string Department;

public:
    Coordinator()
    {
    }
    Coordinator(int id, string s, int i, string p, string dep)
    {
        Teacher::getData(id, s), Staff::getData(i, p);
        Department = dep;
    }

    void display()
    {
        Teacher::displayData();
        Staff::displayData();
        cout << "The department: " << Department << endl;
    }
};
int main()
{
    Coordinator c1(15, "physics", 34, "Acc", "Science"), c2(23, "eco", 32, "finance", "mangmnt");
    c1.display();
    c2.display();
}
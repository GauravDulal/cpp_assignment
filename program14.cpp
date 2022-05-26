// Write a program to enter the information of n students and then
// display it using the concept of multilevel inheritance

#include <iostream>
using namespace std;
class Student
{
    public:
    int symbol;
    string name, address;
    void getData()
    {
        cout << "----------------------------------------------" << endl;
        cout << "Enter name, symbol no and address of the student: " << endl;
        cin >> name >> symbol >> address;
    }
    void displayData()
    {
        cout << "--------------------------------------" << endl;
        cout << "Name: " << name<<endl;
        cout << "Symbol no: " << symbol << endl;
        cout << "Address: " << address << endl;
    }
};
class Exam : public Student
{
public:
    int m1, m2, m3, m4, m5;
    void getData()
    {
        cout << "--------------------------------------" << endl;
        cout << "Enter marks in 5 subjects as, " << endl;
        cout << "--------------------------------------" << endl;
        cout << "Maths: " << endl;
        cin >> m1;
        cout << "Physics: " << endl;
        cin >> m2;
        cout << "C++: " << endl;
        cin >> m3;
        cout << "Applied mechanics: " << endl;
        cin >> m4;
        cout << "Thermal Science: " << endl;
        cin >> m5;
    }
    void displayData()
    {
        cout << "--------------------------------------" << endl;
        cout << "Maths: " << m1 << endl;
        cout << "Physics: " << m2 << endl;
        cout << "C++: " << m3 << endl;
        cout << "Applied mechanics: " << m4 << endl;
        cout << "Thermal Science: " << m5 << endl;
    }
};
class Result : public Exam
{
    int total;
    float percentage;

public:
    void getData()
    {
        Student::getData();
        Exam::getData();
        total = m1 + m2 + m3 + m4 + m5;
        percentage = total * 0.2;
    }
    void displayData()
    {
        cout << "--------------------------------------" << endl;
        cout<<"***************STUDENT DETAILS***************"<<endl;
        Student::displayData();
        Exam::displayData();
        cout << "--------------------------------------" << endl;
        cout << "The total is: " << total << endl;
        cout << "The percentage is: " << percentage << endl;
    }
};
int main()
{
    int n;
    cout << "Enter total no of students: " << endl;
    cin >> n;
    Result o1[n];
    for (int i = 0; i < n; i++)
    {
        o1[i].getData();
        o1[i].displayData();
    }
    return 0;
}
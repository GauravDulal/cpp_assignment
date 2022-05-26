// Write a program to create a class called Room in which data items
// are length, breadth and height. Create an array of objects in the room. And
// finds its area and volume.
#include <iostream>
using namespace std;

class Room
{
    int length, breadth, height, area, volume;

public:
    void getData()
    {
        cout << "Enter length, breadth and height of a room" << endl;
        cin >> length >> breadth >> height;
    }
    void Calc()
    {
        area = length * breadth;
        volume = length * breadth * height;
    }
    void display()
    {
        cout << "The area and volume are: " << area << " " << volume << endl;
    }
};
int main()
{
    Room obj[5];
    for (int i = 0; i <= 5; i++)
    {
        obj[i].getData();
        obj[i].Calc();
        obj[i].display();
    }
}

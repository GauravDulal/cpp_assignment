// Design a Soccer player class that includes three integer fields: a
// player’s jersey number, number of goals, number of assists and necessary
// constructors to initialize the data members. Overload the > Operator (greater
// than). One player is considered greater than another if the sum of goals plus
// assists is greater than of the others. Create an array of 11 soccer players, then
// use the overloaded > operator to find the player who has the greatest total of
// goals plus assists.

#include <iostream>
using namespace std;
int n = 3;
class Player
{
    int jersey_number, goals, assists;

public:
    Player()
    {
    }
    int setData()
    {
        cout << "Enter jersey no, total goals and total assists of the player: " << endl;
        cin >> jersey_number >> goals >> assists;
    }
    void displayData()
    {
        cout << "The player with highest scores is:" << endl;
        cout << "Jersey no: " << jersey_number << endl;
        cout << "Total goals: " << goals << endl;
        cout << "Total assists: " << assists << endl;
    }
    Player operator>(Player o1[])
    {
        Player temp;
        for (int i = 0; i < n; i++)
        {
            if ((goals + assists) < (o1[i+1].goals + o1[i+1].assists))
            {
                temp = *this;
                *this = o1[i];
                o1[i] = temp;
            }
        }
        return *this;
    }
};
int main()
{
    Player obj[n], o2;
    for (int i = 0; i < n; i++)
    {
        obj[i].setData();
    }
    int i = 0;
    o2 = obj[0] > obj;
    o2.displayData();
    return 0;
}
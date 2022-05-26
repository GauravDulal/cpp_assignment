// Using a class write a program that receives inputs, principle
// amount, time and rate. Keeping rate 8% as the default argument, calculate the
// simple interest for three customers.

#include<iostream>
using namespace std;

class interest{
    int principle, time , rate;
    public:
        interest(int r){
            rate = r;
            cout<<"Enter principle and time:"<<endl;
            cin>>principle>>time;
            float SI = (principle*time*rate)/100;
            cout<<"the SI is :"<<SI<<endl;
        }
};

int main(){
    interest i1(8), i2(8), i3(8);
}
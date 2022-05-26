// : Create a class called Mountain with data members name, height,
// location, a constructor initializes the members to the values passed to it as
// parameters, a function called CmpHeight( ) to compare two objects and
// DisplayInf( ) to display the information of Mountain. In main, create two objects
// of the class mountain and print the information of the mountain which is of
// greatest height. 

#include<iostream>
using namespace std;
 class Mountain{
   string name, location;
    int height;
    public:
        Mountain(string n, string l, int h){
            name = n;
            location = l;
            height = h;
        }
        int cmpHeight(Mountain &m1){
            if(this->height>m1.height){
                return true;
            }         
            else 
                return false;
        }
        void displayInfo(){
            cout<<"name = "<<name<<endl;
            cout<<"location = "<<location<<endl;
            cout<<"height = "<<height<<endl;
        }
 };
 int main(){
    Mountain obj1("Everest", "Nepal",8848), obj2("K2", "pakistan", 8000);
    obj1.cmpHeight(obj2);
    if(obj1.cmpHeight(obj2) == true){
        obj2 = obj1;
    }
    cout<<"The tallest mountain is"<<endl;
    obj2.displayInfo();
 }
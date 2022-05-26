// Write a program to find the cube of given integer using inline
// function


#include<iostream>
using namespace std;

inline int func(int x){
    return x*x*x;
}
int main(){
    int n;
    cout<<"Enter a number"<<endl;
    cin>>n;
    cout<<"the cube of number is :"<<func(n)<<endl;
}
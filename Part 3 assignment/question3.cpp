// Any year is input through the keyboard. Write a program to determine whether the year is a leap year or not. (Considering leap year occurs after every 4 year).
#include <iostream>
using namespace std;
int main(){
    int year;
    cout<<"Enter year: ";
    cin>>year;

    if(year%400==0){
        cout<<"Yes, Leap year";
    }else if(year%100==0){
        cout<<"No, Not leap year";
    }else if(year%4==0){
        cout<<"Yes, Leap year";
    }else{
        cout<<"No, Not leap year";
    }
}
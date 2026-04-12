// Given the length and breadth of a rectangle, write a program to find whether the area of the rectangle is greater than its perimeter.
#include<iostream>
using namespace std;
int main(){
    int length;
    cout<<"Enter length: ";
    cin>>length;
    int breadth;
    cout<<"Enter breadth: ";
    cin>>breadth;

    int area = length * breadth;
    int perimeter = 2*(length+breadth);

    if(area>perimeter){
        cout<<"Area is greater than perimeter";
    }else if(area==perimeter){
        cout<<"Area is equal to perimeter";
    }else{
        cout<<"Perimeter is greater than area";
    }
}
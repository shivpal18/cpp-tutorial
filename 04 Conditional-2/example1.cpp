// Given the marks of the student. If the marks are greater than 33 print the result as pass otherwise fail without using if-else statement.
#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter marks: ";
    cin>>x;

    (x>=33) ? cout<<"Pass" : cout<<"Fail";
}
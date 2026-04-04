// Take positive integer input and tell if it is a three digit number or not.
#include<iostream>
using namespace std;
int main(){
    cout<<"Enter number: ";
    int x;
    cin>>x;
    if(x>=100 && x<1000){
        cout<<"Three digit number!";
    }else{
        cout<<"Not a three digit number!";
    }
}
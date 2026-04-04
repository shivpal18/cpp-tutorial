// Take positive integer input and tell if it is even or odd
#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter number: ";
    cin>>x;
    if(x%2==0){
        cout<<"Number is even";
    }else{
        cout<<"Number is odd";
    }
}
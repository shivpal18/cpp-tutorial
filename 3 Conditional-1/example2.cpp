// Take positive integer input and tell if it is divisible by 5 or not
#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter number: ";
    cin>>x;
    if(x%5==0){
        cout<<"Divisible by 5";
    }else{
        cout<<"Not divisible by 5";
    }
}
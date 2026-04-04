// Take positive integer input and tell if it is divisible by 3 and 5.
#include<iostream>
using namespace std;
int main(){
    cout<<"Enter number: ";
    int x;
    cin>>x;
    if(x%3==0 && x%5==0){
        cout<<"Number is divisible by 3 and 5!";
    }else{
        cout<<"Number is not divisible by 3 and 5!";
    }


    // if(x%5==0){
    //     if(x%3==0){
    //     cout<<"Number is divisible by 3 and 5!";
    //     }
    //     else{
    //     cout<<"Number is not divisible by 3 and 5!";
    //     }
    // }else{
    //     cout<<"Number is not divisible by 3 and 5!";
    // }
}
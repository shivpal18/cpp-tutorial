// Take positive integer input and tell if it is divisible by 3 or 5 but not divisible by 15.
#include<iostream>
using namespace std;
int main(){
    cout<<"Enter number: ";
    int x;
    cin>>x;
    if((x%3==0 || x%5==0) && x%15!=0){
        cout<<"Number is divisible by 3 or 5 but not 15!";
    }
    else{
        cout<<"Not matching condition!";
    }
    

    // if(x%3==0 || x%5==0){
    //     if(x%15!=0){
    //         cout<<"Number is divisible by 3 or 5 but not 15!";
    //     }
    //     else{
    //         cout<<"Not matching condition!";
    //     }
    // }
    // else{
    //     cout<<"Not matching condition!";
    // }
}
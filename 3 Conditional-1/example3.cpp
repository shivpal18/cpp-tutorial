// Given an integer. Print the absolute value of that integer
#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter number: ";
    cin>>x;
    // if(x>=0){
    //     cout<<x;
    // }else{
    //     cout<<-x;
    // }

    
    if(x<0){
        x = -x;
    }
    cout<<x;
}
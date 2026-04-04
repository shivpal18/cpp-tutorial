// Take 2 integers input and print the greatest of them.

#include <iostream>
using namespace std;
int main(){
    cout<<"Enter first integer: ";
    int x;
    cin>>x;
    cout<<"Enter second integer: ";
    int y;
    cin>>y;

    if(x>y){
        cout<<x<<" is greatest";
    }
    else{
        cout<<y<<" is greatest";
    }
}
// Swap 2 numbers.
#include<iostream>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    // int temp = a;
    // a = b;
    // b = temp;

    // Swap without taking extra variable
    a = a + b;
    b = a - b;
    a = a - b;
    cout<<a<<" "<<b;
}

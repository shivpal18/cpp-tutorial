// If the marks of A, B and C are input through the keyboard, WAP to determine the student scoring least marks.
#include <iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter first marks: ";
    cin>>a;
    int b;
    cout<<"Enter second marks: ";
    cin>>b;
    int c;
    cout<<"Enter third marks: ";
    cin>>c;

    if(a<=b and a<=c){
        cout<<a<<" is least";
    }else if(b<=a and b<=c){
        cout<<b<<" is least";
    }else{
        cout<<c<<" is least";
    }
}
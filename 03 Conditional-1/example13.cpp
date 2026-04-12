// Take 3 numbers input and tell if they can be the sides of a triangle.
#include <iostream>
using namespace std;
int main(){
    cout<<"Enter first side: ";
    int x;
    cin>>x;
    cout<<"Enter second side: ";
    int y;
    cin>>y;
    cout<<"Enter third side: ";
    int z;
    cin>>z;

    if((x+y>z) && (y+z>x) && (z+x>y)){
        cout<<x<<","<<y<<","<<z<<" can be the side of a triangle";
    }
    else{
        cout<<"Invalid triangle";
    }
}
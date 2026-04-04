// WAP for finding the volume of cylinder by taking radius and height as input
#include<iostream>
using namespace std;
int main(){
    float r;
    cout<<"Enter radius: ";
    cin>>r;
    float h;
    cout<<"Enter height: ";
    cin>>h;
    float pi = 3.14;
    float v = pi*r*r*h;
    cout<<"Volume of cylinder is: "<<v;
}
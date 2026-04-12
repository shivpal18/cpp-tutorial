// Given the radious of the circle predict whether area of this circle is larger than the circumference or not.
#include<iostream>
using namespace std;

int main(){
    int r;
    cout<<"Enter the value of radius: ";
    cin>>r;

    float area = 3.14 * r * r;
    float circumference = 2 * 3.14 * r;

    if(area > circumference){
        cout<<"Area is greater";
    }
    else{
        cout<<"Circumference is greater than or equal to the area";
    }
}
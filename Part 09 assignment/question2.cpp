// Write a function that takes radius of a circle as argument and return its area.
#include<iostream>
using namespace std;
float areaOfCircle(int radius){
    float area = 3.14*radius*radius;
    return area;
}
int main(){
    int radius;
    cin>>radius;
    cout<<areaOfCircle(radius)<<endl;
}
// Given a point (x, y), WAP to find out if it lies on the x-axis, y-axis or at the origin, viz. (0,0).
#include<iostream>
using namespace std;
int main(){
    int x, y;
    cin>>x>>y;
    if(x==0 and y==0){
        cout<<"Point is on origin.";
    }else if(x==0){
        cout<<"Point is on y-axis.";
    }else if(y==0){
        cout<<"Point is on x-axis";
    }else{
        cout<<"Point lies somewhere else";
    }
}
// Given three points (x1, y1), (x2, y2) and (x3, y3), WAP to check if all the three points fall on the straigth line.
#include<iostream>
using namespace std;
int main(){
    int x1,y1,x2,y2,x3,y3;
    cin>>x1>>y1>>x2>>y2>>x3>>y3;
    int m1 = (y2-y1)/(x2-x1);
    int m2 = (y3-y2)/(x3-x2);

    if(m1==m2){
        cout<<"yes points are on the same line";
    }else{
        cout<<"no the points are not on the same line";
    }
}
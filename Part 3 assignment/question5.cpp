// WAP to input sides of a triangle and check whether a triangle is equilateral, scalene or isosceles triangle.
#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter first side: ";
    cin>>a;
    int b;
    cout<<"Enter second side: ";
    cin>>b;
    int c;
    cout<<"Enter third side: ";
    cin>>c;

    if(a==b and a==c){
        cout<<"Triangle is equilateral";
    }else if((a!=b and a==c) or (a==b and a!=c) or (b==c and b!=a)){
        cout<<"Triangle is isosceles";
    }else{
        cout<<"Triangle is scalene";
    }
}
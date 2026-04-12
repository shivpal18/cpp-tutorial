// Take 3 positive integer input and print greatest of them.
#include<iostream>
using namespace std;
int main(){
    cout<<"Enter first number: ";
    int x;
    cin>>x;
    cout<<"Enter second number: ";
    int y;
    cin>>y;
    cout<<"Enter third number: ";
    int z;
    cin>>z;

    // if(x>y && x>z){
    //     cout<<"Greatest number of: "<<x;
    // }
    // if(y>x && y>z){
    //     cout<<"Greatest number of: "<<y;
    // }
    // if(z>x && z>y){
    //     cout<<"Greatest number of: "<<z;
    // }


    // if(x>y && x>z){
    //     cout<<"Greatest number of: "<<x;
    // }
    // else if(y>x && y>z){
    //     cout<<"Greatest number of: "<<y;
    // }
    // else{
    //     cout<<"Greatest number of: "<<z;
    // }


    if(x>y){
        if(x>z){
            cout<<x<<" is greatest!";
        }
        else{  //c>a, a>b->c>a>b
            cout<<z<<" is greatest!";
        }
    }
    else{  //b>a
        if(y>z){
            cout<<y<<" is greatest!";
        }
        else{  //c>b>a
            cout<<z<<" is greatest!";
        }
    }
}
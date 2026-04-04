#include<iostream>
using namespace std;
int main(){
    // int x = 4;
    // int* p = &x;
    // cout<<*p;

    int x = 13;
    int* p = &x;
    cout<<x<<endl;
    *p = 6;
    cout<<x;
}
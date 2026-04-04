// Predict the output
#include<iostream>
using namespace std;
int main(){
    int a = 15, b = 20;
    int *ptr = &a;
    int *ptr2 = &b;
    *ptr = *ptr2;   // a gets value of b
    cout<<(*ptr)<<" and "<<(*ptr2)<<endl;
}
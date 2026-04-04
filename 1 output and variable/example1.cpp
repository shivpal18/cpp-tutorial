// take two integer a and b: a>b, and find the remainder when a is divided by b

#include <iostream>
using namespace std;

int main(){
    int a = 16;
    int b = 3;
    int q = a/b;
    int r;
    r = a - (b*q);
    cout<<r;
}
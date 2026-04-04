// Write a function to print squares of first n natural number, taking n as argumentto the function.
#include<iostream>
using namespace std;
void square(int n){
    for(int i=1; i<=n; i++){
        cout<<i*i<<" ";
    }
}
int main(){
    int n;
    cin>>n;
    square(n);
}
// Print the given pattern.
// a
// b b
// c c c
// d d d d
// Alphabet triangle.

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter no of rows: ";
    cin>>n;

    for(char i=1; i<=n; i++){
        for(char j=1; j<=i; j++){
            cout<<char(i+96)<<" ";
        }
        cout<<endl;
    }
}
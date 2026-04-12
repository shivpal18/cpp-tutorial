// Print the given pattern.
// A
// A B
// A B C
// A B C D
// Alphabet triangle.

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter no of rows: ";
    cin>>n;

    for(char i=1; i<=n; i++){
        for(char j=1; j<=i; j++){
            cout<<char(j+64)<<" ";
        }
        cout<<endl;
    }
}
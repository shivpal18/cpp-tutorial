// Print the given pattern.
// 1 1 1 1
// 2 2 2
// 3 3
// 4
// number triangle reverse.

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter no of rows: ";
    cin>>n;

    for(int i=1; i<=n; i++){
        for(int j=1; j<=n-i+1; j++){
            cout<<i<<" ";
        }
        cout<<endl;
    }
}
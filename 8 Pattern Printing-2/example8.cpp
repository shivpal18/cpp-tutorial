// Print the given pattern.
// 1 2 3 4 5 6 7
// 1 2 3   5 6 7
// 1 2       6 7
// 1           7
// number bridge.

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter no of rows: ";
    cin>>n;
    // 2n-1 number
    for(int i=1; i<=2*n-1; i++){
        cout<<i;
    }
    cout<<endl;
    int m=n-1; //new lines
    int nsp=1;
    for(int i=1; i<=m; i++){
        // numbers
        int a = 1;
        for(int j=1; j<=m+1-i; j++){
            cout<<a;
            a++;
        }
        // spaces
        for(int k=1;k<=nsp; k++){
            cout<<" ";
            a++;
        }
        nsp+=2;
        // numbers
        for(int j=1; j<=m+1-i; j++){
            cout<<a;
            a++;
        }
        cout<<endl;
    }
}
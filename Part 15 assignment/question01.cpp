// WAP to print the elements of both the diagonals in a square matrix.

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n][n];

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++) cin>>a[i][j];
    }
    cout<<"Elements at the diagonals are : "<<endl;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if((i+j == n-1) or (i == j)) cout<<a[i][j]<<" ";
            else cout<<"  ";
        }
        cout<<endl;
    }
}
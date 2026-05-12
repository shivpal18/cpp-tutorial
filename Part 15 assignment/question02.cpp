// WAP to rotate the matrix by 90 degree anti-clockwise.

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n][n];

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++) cin>>a[i][j];
    }

    // step 1 : to find the given matrix
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(i<j) swap(a[i][j], a[j][i]);
        }
    }

    //  step 2 : reverse each column one by one
    for(int j=0; j<n; j++){
        for(int i=0; i<n/2; i++){
            swap(a[i][j], a[n-i-1][j]);
        }
    }
    cout<<"the rotated array is : "<<endl;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++) cout<<a[i][j]<<" ";
        cout<<endl;
    }
}
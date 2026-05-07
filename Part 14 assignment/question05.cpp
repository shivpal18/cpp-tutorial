// WAP to displays the elements of middle row and the elements of middle column of a 2D matrix.
// [Assuming the 2D array to be a square matrix with odd dimension i.e. 3*3, 5*5, 7*7 etc....]  

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n][n];

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++) cin>>a[i][j];
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(i==n/2 or j==n/2) cout<<a[i][j]<<" ";
            else cout<<"  ";
        }
        cout<<endl;
    }
}
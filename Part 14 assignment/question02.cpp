// WAP to add two matrices and save the result in one of the given matrices.

#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, m;
    cin>>n>>m;

    int a[n][m], b[n][m];
    cout<<endl;

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++) cin>>a[i][j];
    }
    cout<<endl;

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++) cin>>b[i][j];
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            a[i][j] = a[i][j] + b[i][j];
        }
    }
    cout<<endl;

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}
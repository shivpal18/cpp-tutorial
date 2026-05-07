// WAP to print the row number having the maximum sum in a given matrix.

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m;
    cin>>n>>m;
    int a[n][m];

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++) cin>>a[i][j];
    }

    int index = -1, maximum = INT_MIN;

    for(int i=0; i<n; i++){
        int sum = 0;

        for(int j=0; j<m; j++){
            sum += a[i][j];
        }

        if(maximum<sum){
            maximum = sum;
            index = i;
        }
    }
    cout<<"The row with max sum is: "<<index + 1<<endl;
}
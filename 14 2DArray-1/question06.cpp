// you are given a matrix / 2D-array of size(m*n). change this matrix into its transpose.

#include <iostream>
using namespace std;

int main(){
    int m;
    cout<<"Enter the no of rows: ";
    cin>>m;
    int arr[m][m];
    for(int i=0; i<=m-1; i++){
        for(int j=0; j<=m-1; j++){
            cin>>arr[i][j];
        }
    }
    cout<<endl;
    // print
    for(int i=0; i<=m-1; i++){
        for(int j=0; j<=m-1; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    // transpose the same matrix
    for(int i=0; i<=m-1; i++){
        for(int j=i+1; j<=m-1; j++){
            int temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
    }
    // print
    for(int i=0; i<=m-1; i++){
        for(int j=0; j<=m-1; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl; 
    }
}
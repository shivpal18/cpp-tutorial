// Print the given pattern
// 1357
// 135
// 13
// 1
// reverse odd number triangle.

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter no of rows: ";
    cin>>n;

    for(int i=1;i<=n;i++){
        int a = 1;
        for(int j=1;j<=n+1-i;j++){
            cout<<a;
            a+=2;
        }
        cout<<endl;
    }
}
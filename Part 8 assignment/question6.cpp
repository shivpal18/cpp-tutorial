// Print the given pattern
//       *
//     *   *
//   *       *
// *           *
//   *       *
//     *   *
//       *

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter no of rows: ";
    cin>>n;
    for(int i=1; i<=n-1; i++){
        cout<<"  ";
    }
    cout<<"* ";
    cout<<endl;
    for(int i=2; i<=n-1; i++){
        for(int j=1; j<=n-i; j++)cout<<"  ";
        cout<<"* ";
        for(int j=1; j<=2*(i-1)-1; j++) cout<<"  ";
        cout<<"* ";
        cout<<endl;
    }

    for(int i=1; i<=n-1; i++){
        for(int j=1; j<i; j++) cout<<"  ";
        cout<<"* ";
        int m = 2*(n-i);
        for(int j=1; j<m; j++) cout<<"  ";
        cout<<"* ";
        cout<<endl;
    }
    for(int i=1; i<=n-1; i++) cout<<"  ";
    cout<<"*";
}
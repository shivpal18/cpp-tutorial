// Print the given pattern
//       1
//     1 2 3
//   1 2 3 4 5
// 1 2 3 4 5 6 7
// Number Pyramid

#include<iostream>
using namespace std;
int  main(){
    int n;
    cout<<"Enter rows no: ";
    cin>>n;

    for(int i=1; i<=n; i++){
        // for spaces
        for(int j=1; j<=n-i; j++){
            cout<<"  ";
        }
        // for number
        for(int j=1; j<=2*i-1; j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}
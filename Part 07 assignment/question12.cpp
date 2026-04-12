// Print the given pattern.
//       1
//     1 2
//   1 2 3
// 1 2 3 4
// Number triangle flipped.

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter rows no: ";
    cin>>n;
    
    for(int i=1; i<=n; i++){
        // for spaces
        for(int j=1; j<=n-i; j++) cout<<"  ";
        // for numbers
        for(int j=1; j<=i; j++) cout<<j<<" ";
        cout<<endl;
    }
}
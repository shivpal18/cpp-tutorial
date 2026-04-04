// Print the given pattern.
//       A
//     A B
//   A B C
// A B C D
// Alphabet triangle flipped.

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter rows no: ";
    cin>>n;
    
    for(int i=1; i<=n; i++){
        // for spaces
        for(int j=1; j<=n-i; j++) cout<<"  ";
        // for alphabet
        for(int j=1; j<=i; j++) cout<<char (j+64)<<" ";
        cout<<endl;
    }
}
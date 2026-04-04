// Print the given pattern.
//       a
//     b a
//   c b a
// d c b a
// Alphabet triangle flipped-2.

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
        for(int j=1; j<=i; j++) cout<<char (i-j+96+1)<<" ";
        cout<<endl;
    }
}
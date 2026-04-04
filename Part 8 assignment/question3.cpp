// Print the given pattern
//       A
//     B A B
//   C B A B C
// D C B A B C D
// Alphabet Pyramid Palindrome

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
        // for alphabet
        for(int j=i; j>=1; j--) cout<<char (j+64)<<" ";
        for(int j=1; j<i; j++) cout<<char (j+64+1)<<" ";
        cout<<endl;
    }
}
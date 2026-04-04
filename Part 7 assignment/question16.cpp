// Print the given pattern.
//       *
//     * *
//   * * *
// * * * *
//   * * *
//     * *
//       *

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter no of rows: ";
    cin>>n;

    // for upper triangle
    for(int i=1; i<=n; i++){
        // for spaces
        for(int j=1; j<=n-i; j++) cout<<"  ";
        // for stars
        for(int j=1; j<=i; j++) cout<<"* ";
        cout<<endl;
    }
    
    // for lower triangle
    for(int i=1; i<=n-1; i++){
        // for spaces
        for(int j=1; j<=i; j++) cout<<"  ";
        // for stars
        for(int j=1; j<=n-i; j++) cout<<"* ";
        cout<<endl;
    }
}
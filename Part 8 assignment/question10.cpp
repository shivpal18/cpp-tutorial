// Print the given pattern
// * * * * * * *
// * * *   * * *
// * *       * *
// *           *
// * *       * *
// * * *   * * *
// * * * * * * *

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter no of rows: ";
    cin>>n;
    
    // treating first row seperatly
    for(int i=1; i<=2*n-1; i++) cout<<"* ";
    cout<<endl;

    // upeer half
    for(int i=1; i<=n-1; i++){
        // stars
        for(int j=1; j<=n-i; j++) cout<<"* ";
        // spaces
        for(int j=1; j<=2*i-1; j++) cout<<"  ";
        // stars
        for(int j=1; j<=n-i; j++) cout<<"* ";
        cout<<endl;
    }
    // lower half
    for(int i=n-2; i>=1; i--){
        // stars
        for(int j=1; j<=n-i; j++) cout<<"* ";
        // spaces
        for(int j=1; j<=2*i-1; j++) cout<<"  ";
        // stars
        for(int j=1; j<=n-i; j++) cout<<"* ";
        cout<<endl;
    }
    for(int i=1; i<=2*n-1; i++) cout<<"* ";
    cout<<endl;
}
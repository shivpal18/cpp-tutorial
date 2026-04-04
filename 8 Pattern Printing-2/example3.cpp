// Print the given pattern.
//       * 
//     * * * 
//   * * * * *
// * * * * * * *
// Star Pyramid.

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter rows no: ";
    cin>>n;
    
    for(int i=1; i<=n; i++){
        // for spaces
        for(int j=1; j<=n-i; j++) cout<<"  ";
        // for stars
        for(int j=1; j<=2*i-1; j++) cout<<"* ";
        cout<<endl;
    }
}
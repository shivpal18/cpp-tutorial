// Print the given pattern.
// * * * * 
//   * * * *
//     * * * *
//       * * * *
// Reverse Rhombos.

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter rows no: ";
    cin>>n;
    
    for(int i=1; i<=n; i++){
        // for spaces
        for(int j=1; j<=i-1; j++) cout<<"  ";
        // for stars
        for(int j=1; j<=n; j++) cout<<"* ";
        cout<<endl;
    }
}
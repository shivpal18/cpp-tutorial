// Print the given pattern
//    *
//   **
//  ***
// ****
// star triangle flipped.

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter no of rows: ";
    cin>>n;
    
    // Method-1
    // for(int i=1;i<=n;i++){
    //     // for spaces
    //     for(int j=1; j<=n-i; j++){
    //         cout<<" ";
    //     }
    //     // for stars
    //     for(int k=1; k<=i; k++){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }

    // Method-2
    for(int i=1;i<=n;i++){
        for(int j=1; j<=n; j++){
            if((i+j)>=n+1) cout<<"*";
            else cout<<" ";
        }
        
        cout<<endl;
    }
}
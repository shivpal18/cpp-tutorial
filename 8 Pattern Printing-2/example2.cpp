// Print the given pattern.
// * 
// * * * 
// * * * * *
// * * * * * * *
// odd Star triangle.

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter rows no: ";
    cin>>n;
    
    for(int i=1; i<=n; i++){
        for(int j=1; j<=2*i-1; j++) {
            cout<<"* ";
        }   
        cout<<endl;
    }
}
// Print the given pattern
// A B C D E F G
// A B C   E F G
// A B       F G
// A           G
// Alphabet bridge.
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter no of rows: ";
    cin>>n;
    for(int i=1; i<=2*n-1; i++) cout<<char (1+i+'A')<<" ";
    cout<<endl;
    
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n-i; j++) cout<<char(j+'A'-1)<<" ";
        for(int j=1; j<=2*i-1; j++) cout<<"  ";
        for(int j=1; j<=n-i; j++) cout<<char(n+j+i+'A'-2)<<" ";
        cout<<endl;
    }
}
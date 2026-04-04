// Display this GP - 3,12,48....upto 'n' terms.
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number: ";
    cin>>n;
    int a=3,r=4;
    for(int i=1;i<=n;a*=r){
        cout<<a<<endl;
        i++;
    }
}
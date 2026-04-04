// Find the unique number in a given array where all the elements are being repeated twice with one value being unique. 
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++) cin>>a[i];
    for(int i=0; i<n; i++){
        int count = 0;
        for(int j=0; j<n; j++){
            if((i!=j) and (a[i] == a[j])){
                count++;
            }
        }
        if(count==0){
            cout<<a[i]<<endl;
            break;
        }
    }
    
}
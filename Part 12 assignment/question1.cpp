// Count the number of elements strictly greater than x in the given array.
#include<iostream>
#include<vector>
using namespace std;
int countGreaterX(int a[], int n, int x){
    int count = 0;
    for(int i=0; i<n; i++){
        if(a[i]>x) count++;
    }
    return count;
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++) cin>>a[i];
    int x;
    cin>>x;
    cout<<"Number of elements greater than x are: "<<countGreaterX(a, n, x);
}
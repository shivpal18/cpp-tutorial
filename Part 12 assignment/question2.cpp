// WAP to find the largest three elements in the array.
#include<bits/stdc++.h>
using namespace std;
void threeGreatest(int a[], int n){
    int max1 = INT_MIN, max2 = INT_MIN, max3 = INT_MIN;
    for(int i=0; i<n; i++){
        if(a[i]>max1){
            max3 = max2;
            max2 = max1;
            max1 = a[i];
        }
        else if(a[i] > max2){
            max3 = max2;
            max2 = a[i];
        }
        else if(a[i] > max3){
            max3 = a[i];
        }
    }
    if(max1 == INT_MIN) cout<<"No maximun number ";
    else cout<<max1<<" ";
    if(max2 == INT_MIN) cout<<"No 2nd maximun number ";
    else cout<<max2<<" ";
    if(max3 == INT_MIN) cout<<"No 3rd maximum number ";
    else cout<<max3<<" ";
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++) cin>>a[i];
    threeGreatest(a, n);
}
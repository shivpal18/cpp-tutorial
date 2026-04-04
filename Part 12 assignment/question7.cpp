// If an array arr contains n elements, then check if the given array is a palindrome or not. 
#include<bits/stdc++.h>
using namespace std;
bool isPalindrome(int a[], int n){
    for(int i=0; i<n; i++){
        if(a[i] != a[n-i-1]) return false;
    }
    return true;
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++) cin>>a[i];
    cout<<"is the given array palindrome ? "<<isPalindrome(a, n)<<endl;
}
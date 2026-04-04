// Find the element x in the aaray. Take array and x as input.
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    int arr[n];
    //input
    cout<<"Enter array elements: ";
    for(int i=0; i<=n-1; i++){
        cin>>arr[i];
    }
    int x;
    cout<<"Enter the element you want to search: ";
    cin>>x;
    // check marks
    bool flag = false; // false -> not pesent
    // Search
    for(int i=0; i<=n-1; i++){
        if(arr[i]==x) flag = true;
    }
    if(flag==true) cout<<"Element is present"<<endl;
    else cout<<"Elemen is no present";
}
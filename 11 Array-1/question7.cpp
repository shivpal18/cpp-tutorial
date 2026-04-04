// Find the second maximum value out of all the elements in the array.
#include<iostream>
#include<climits>
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
    //int max = arr[0];
    int max = INT_MIN;
    for(int i=1; i<=n-1; i++){
        if(max<arr[i]) max=arr[i];
    }

    int secmax = INT_MIN;
    for(int i=1; i<=n-1; i++){
        if(arr[i]!=max && secmax<arr[i]) secmax=arr[i];
    }
    cout<<"Max value is: "<<max<<endl;
    cout<<"Second max value is: "<<secmax;
}
// Point out error(if any) in the following code.
#include<iostream>
using namespace std;
int main(){
    int size;
    cin>>size;
    int arr[size];
    //for(i=1; i<=size; i++){   //data type is not defined inside the loop
    for(int i=1; i<=size; i++){  // corrected form
        cin>>arr[i];
        cout<<arr[i];
    }
    return 0;
}

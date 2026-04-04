#include<iostream>
using namespace std;
void display(int a[], int size){
    for(int i=0; i<=size-1; i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    return;
}
int change(int b[], int size){
    b[0] = 100;
}
int main(){
    int arr[5] = {4,6,3,8,6};
    int size = sizeof(arr)/sizeof(arr[0]);
    cout<<size<<endl;
    // accessing the element of array in anoyher function
    // updation, pass by value/referene
    display(arr, size);
    change(arr, size);
    display(arr, size);
}
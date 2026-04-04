#include<iostream>
using namespace std;
int main(){
    int arr[] = {3,2,4,6,8};
    int* ptr = arr;  // giving addrss
    for(int i=0; i<=4; i++){
        cout<<*ptr<<" "; // cout<<i[ptr] is also valid and cout<<i[arr] is also valid
        ptr++;
    }
    ptr = arr; // ptr is pointing to 1st element
    *ptr = 8;  //ptr[0] = 8
    ptr++; // ptr is pointng to 2nd element
    *ptr = 9;
    ptr--; // ptr is pointing to 1st element
    cout<<endl;
    for(int i=0; i<=4; i++){
        cout<<*ptr<<" ";
        ptr++;
    }
    ptr = arr; // ptr is pointing to 1st element
}
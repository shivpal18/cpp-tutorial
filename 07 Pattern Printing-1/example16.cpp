// Print the given pattern
// 1
// 0 1
// 1 0 1 
// 0 1 0 1
// Binary triangle.

// Method-1 = using extra variable
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter no of rows: ";
//     cin>>n;

//     int a=5;
//     for(int i=1;i<=n;i++){
//         if(i%2!=0) a = 1; // row no odd
//         else a = 0; // row no even
//         for(int j=1;j<=i;j++){
//             cout<<a;
//             // flipping
//             if(a==1) a=0;
//             else a=1;
//         }
//         cout<<endl;
//     }
// }


// Method-2 = using mathematics
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter no of rows: ";
    cin>>n;

    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            if((i+j)%2==0) cout<<1;
            else cout<<0;
        }
        cout<<endl;
    }
}
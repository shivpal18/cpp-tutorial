// Print the given pattern
// A
// AB
// ABC
// ABCD
// alphabet triangle.

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter no of rows: ";
//     cin>>n;

//     n+=64;
//     for(char i=65; i<=n; i++){
//         for(char j=65; j<=i; j++){
//             cout<<j;
//         }
//         cout<<endl;
//     }
// }


#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter no of rows: ";
    cin>>n;

    for(char i=1; i<=n; i++){
        for(char j=1; j<=i; j++){
            cout<<char(j+64);
        }
        cout<<endl;
    }
}
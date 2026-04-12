// Print the given pattern
// ABCD
// ABCD
// ABCD
// ABCD
// alphabet square.

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter no of rows: ";
//     cin>>n;

//     n+=64;
//     for(char i=65; i<=n; i++){
//         for(char j=65; j<=n; j++){
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
        for(char j=1; j<=n; j++){
            cout<<char(j+64);
        }
        cout<<endl;
    }
}
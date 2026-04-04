#include<iostream>
#include<vector>
using namespace std;
int main(){
    // If vector size defined

    // vector<int> v(5);
    // for(int i=0; i<5; i++){
    //     cout<<v[i];
    // }
    // for(int i=0; i<5; i++){
    //     cout<<v[i]<<" ";
    // }

    //  If vector size not defined
    vector<int> v;
    for(int i=0; i<5; i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    for(int i=0; i<5; i++){
        cout<<v[i]<<" ";
    }
}
// Sort the array of 0's and 1's

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void sort01 (vector<int>& v){
    int n  = v.size();
    int noOf1 = 0;
    int noOf0 = 0;
    for(int i=0; i<n; i++){
        if(v[i]==0) noOf0++;
        else noOf1++;
    }
    //filling elements
    for(int i=0; i<n; i++){
        if(i<noOf0) v[i] = 0;
        else v[i] = 1;
    }
}
int main(){
    vector<int> v;
    v.push_back(1);
    v.push_back(0);
    v.push_back(0);
    v.push_back(1);
    v.push_back(1);
    v.push_back(0);
    v.push_back(1);

    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;

    // Method 1
    // sort(v.begin(),v.end());
    // for(int i=0; i<v.size(); i++){
    //     cout<<v[i]<<" ";
    // }

    // Method 2
    sort01(v);
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
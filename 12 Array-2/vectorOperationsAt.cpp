#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    v.push_back(4);
    v.push_back(7);
    v.push_back(5);
    v.push_back(8);
    v.at(2) = 90;
    cout<<v.at(2);
}
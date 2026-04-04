#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    v.push_back(4); // 1 1(size, capacity)
    v.push_back(5); // 2 2 
    v.push_back(4); // 3 4
    v.push_back(7); // 4 4
    v.push_back(5); // 5 8
    v.push_back(8); // 6 8
    v.push_back(9); // 7 8
    v.push_back(3); // 8 8
    v.push_back(4); // 9 16
    v.push_back(5); // 10 16
    v.push_back(4); // 11 16
    v.push_back(7); // 12 16
    v.push_back(5); // 13 16
    v.push_back(8); // 14 16
    v.push_back(9); // 15 16
    v.push_back(3); // 16 16
    v.push_back(4); // 17 32
    v.push_back(5);
    v.push_back(4);
    v.push_back(7);
    v.push_back(5);
    v.push_back(8);
    v.push_back(9);
    v.push_back(3);
    cout<<"Size is: "<<v.size()<<endl;
    cout<<"Capacity is: "<<v.capacity()<<endl;

    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();
    cout<<"Size is: "<<v.size()<<endl;
    cout<<"Capacity is: "<<v.capacity()<<endl;
}
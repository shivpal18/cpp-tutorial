//  Find the factorial of a large number.

#include <bits/stdc++.h>
using namespace std;

int go(vector<int> &a, int val){
    int carry = 0;
    for(int i=0; i<a.size(); i++){
        int product = a[i] * val + carry;
        a[i] = product % 10;
        carry = product / 10;
    }

    while(carry){
        a.push_back(carry % 10);
        carry /= 10;
    }

    return a.size();
}

int main(){
    int n;
    cin >> n;

    vector<int> a;
    a.push_back(1);

    for(int i=2; i<=n; i++){
        go(a, i);
    }

    for(int i=a.size()-1; i>=0; i--){
        cout << a[i];
    }
}
// If cost price and selling price of an item is input through the keyboard, WAP to determine whether the seller has made profit or incurred loss. Also determine how much profit or loss he made incurred.
#include<iostream>
using namespace std;
int main(){
    cout<<"Enter the Cost price: ";
    int cp;
    cin>>cp;
    cout<<"Enter the Selling price: ";
    int sp;
    cin>>sp;

    if(sp>cp){
        cout<<"Profit = "<<sp -cp; 
    }
    if(cp>sp){
        cout<<"Loss = "<<cp - sp;
    }
    if(cp==sp){
        cout<<"No profit, No loss!";
    }
}
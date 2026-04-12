// WAP to check whether a character is an alphabet or not.
#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Enter the character: ";
    cin>>ch;
    if((int(ch>64) && int(ch<91)) || (int(ch>96) && int(ch<123))){
        cout<<ch<<" is an alphabet";
    }
    else{
        cout<<ch<<" is not an alphabet";
    }
}
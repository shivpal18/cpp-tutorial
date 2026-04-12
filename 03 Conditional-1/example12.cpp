// WAP to check whether a given character is a vowel or consonent.
#include <iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Enter the character: ";
    cin>>ch;
    if((int(ch>64) && int(ch<91)) || (int(ch>96) && int(ch<123))){
        if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u'){
            cout<<ch<<" is a vowel";
        }
        else{
            cout<<ch<<" is a consonant";
        }
    }
    else{
        cout<<ch<<" is not an alphabet";
    }
}
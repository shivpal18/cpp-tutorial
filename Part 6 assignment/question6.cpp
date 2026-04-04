// WAP to print sum of a given number and its reverse.
#include<iostream>
using namespace std;
int main(){
    int number;
    cout<<"Enter number: ";
    cin>>number;
    int x=0;
    int num=number;

    while(number){
        x*=10;
        x+=(number%10);
        number/=10;
    }
    cout<<"The sum of number and its reverse is: "<<num+x<<endl;
}
// WAP to print sum of all the even digits of a given number.
#include<iostream>
using namespace std;
int main(){
    int number;
    cout<<"Enter number: ";
    cin>>number;
    int sum = 0;
    while(number){
        int digit = number%10;
        if(digit%2==0)sum+=digit;
        number/=10;
    }
    cout<<"The sum of even digits is: "<<sum<<endl;
}
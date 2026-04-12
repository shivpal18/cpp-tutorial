// Write a function to count number of digits in a number and then print the square of this number.
#include<iostream>
using namespace std;
int countDigitSquare(int number){
    int count = 0;
    while(number){
        count++;
        number/=10;
    }
    return count*count; //return square(count);
}
int main(){
    int number;
    cin>>number;
    cout<<countDigitSquare(number)<<endl;
}
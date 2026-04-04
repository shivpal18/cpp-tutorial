/* 
Take input marks of a student and print the Grade according to marks:
1. 91-100: Excellent
2. 81-90: Very Good
3. 71-80: Good
4. 61-70: Can do better
5. 51-60: Average
6. 41-50: Below average
7. <40: Fail
*/
#include<iostream>
using namespace std;
int main(){
    cout<<"Enter Marks: ";
    int x;
    cin>>x;

    // if(x>=91 && x<=100){
    //     cout<<"Excellent";
    // }
    // if(x>=81 && x<=90){
    //     cout<<"Very good";
    // }
    // if(x>=71 && x<=80){
    //     cout<<"Good";
    // }
    // if(x>=61 && x<=70){
    //     cout<<"Can do better";
    // }
    // if(x>=51 && x<=60){
    //     cout<<"Average";
    // }
    // if(x>=41 && x<=50){
    //     cout<<"Below average";
    // }
    // if(x<40){
    //     cout<<"Fail";
    // }
    

    // if(x>=91){
    //     cout<<"Excellent";
    // }
    // else{
    //     if(x>=81){
    //         cout<<"Very good";
    //     }
    //     else{
    //         if(x>=71){
    //             cout<<"Good";
    //         }
    //         else{
    //             if(x>=61){
    //                 cout<<"Can do better";
    //             }
    //             else{
    //                 if(x>=51){
    //                     cout<<"Average";
    //                 }
    //                 else{
    //                     if(x>=41){
    //                         cout<<"Below average";
    //                     }
    //                     else{
    //                         cout<<"Fail";
    //                     }
    //                 }
    //             }
    //         }
    //     }
    // }


    if(x>=91){
        cout<<"Excellent";
    }
    else if(x>=81){
        cout<<"Very Good";
    }
    else if(x>=71){
        cout<<"Good";
    }
    else if(x>=61){
        cout<<"Can do better";
    }
    else if(x>=51){
        cout<<"Average";
    }
    else if(x>=41){
        cout<<"Below average";
    }
    else if(x<40){
        cout<<"Fail";
    }
}
#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter a Number: ";
    cin>>n;
    int sum=0;
    int origonaln=n;
    while(n>0){
        int lastDigit= n%10;
        sum  = pow(lastDigit,3);
        n-n/10;
    }
    if(sum==origonaln){
        cout<<"This NUmber Is A Armstrong Number"<<endl;
    }
    else{
        cout<<"This is not a Armstrong number"<<endl;
    }
}
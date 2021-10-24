#include <iostream>
using namespace std;
int main(){
    int n;
    int i;
    cout<<"Enter A Number: ";
    cin>>n;
    for(i=2; i<n; i++){
        if(n%i==0){
            cout<<"This number is not prime ";
            break;
        }
    }
    if(i==n){
        cout<<" this number is prime "<<endl;
    }
}
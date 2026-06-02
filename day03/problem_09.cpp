
// wap to check whether a number is a prime 
#include<bits/stdc++.h>
using namespace std;

int prime(int n){
    if(n<=1){
        return 0;
    }
    for(int i=2; i<=sqrt(n); i++){
        if(n%i == 0){
            return 0;
        }
    }
    return 1;
}

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    if(prime(n)){
        cout<<"The given number is a prime."<<"\n";
    }
    else {
        cout<<"The given number is not a prime."<<"\n";
    }
    return 0;
}


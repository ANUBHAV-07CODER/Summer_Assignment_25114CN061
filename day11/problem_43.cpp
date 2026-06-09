// wap to write function to check prime
#include<bits/stdc++.h>
using namespace std;

int prime(int a){
    if(a<=1){
        return 0;
    }
    for(int i=2;i<a;i++){
        if(a%i==0){
            return 0;
        }
    }
    return 1;
}
int main(){
    int x;
    cout<<"enter x:";
    cin>>x;

    if(prime(x)){
        cout<<" it is a prime";
    }
    else{
        cout<<" it is not prime";
    }
    return 0;
}


// wap to print prime numbers in a range
#include<bits/stdc++.h>
using namespace std;

int prime_range(int a, int b){
    for(int i=a; i<=b; i++){
        if(prime(i)){
            cout<<i<<" is a prime number."<<"\n";

        }
    }
}
int main(){
    int a, b;
    cout<<"Enter lower limit: ";
    cin>>a;
    cout<<"Enter upper limit: ";
    cin>>b;
    prime_range(a, b);
    return 0;
}

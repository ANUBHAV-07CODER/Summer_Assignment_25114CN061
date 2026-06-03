// wap to find largest prime factor .
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter number:";
    cin>>n;
    int largest = 1;
    for(int i=2;i<=n;i++){
        while(n%i==0){
            largest = i;
            n=n/i;
        }
    }
    cout<<"Largest prime factor is: "<<largest;

    return 0;
}

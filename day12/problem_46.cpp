// wap to write function for armstrong
#include<bits/stdc++.h>
using namespace std;

int armstrong(int n){
    int sum = 0,digit;
    int temp=n;
    while(n>0){
        digit = n%10;
        sum += digit*digit*digit;
        n /= 10;
    }
    if(temp==sum){
        cout<<"Armstrong number";
    }
    else{
        cout<<"Not Armstrong number";
    }
}
int main(){
    int x;
    cout<<"Enter x:";
    cin>>x;
    armstrong(x);
    return 0;
}

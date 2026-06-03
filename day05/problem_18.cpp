// wap to check strong number
#include<bits/stdc++.h>
using namespace std;

int fact(int n){
    if(n==0 || n==1){
        return 1;
    }
    else{
        return (n)*fact(n-1);
    }
}
int main(){
    int n;
    cout<<"Enter number:";
    cin>>n;
    int sum = 0;
    int temp = n;
    while(n>0){
        int digit = n%10;
        sum += fact(digit);
        n=n/10;
    }
    if(sum==temp){
        cout<<"Strong number";
    }else{
        cout<<"Not a strong number";
    }

    return 0;
}

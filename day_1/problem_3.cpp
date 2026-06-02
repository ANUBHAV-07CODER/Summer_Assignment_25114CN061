
// wap to find factorial of a number.
#include<bits/stdc++.h>
using namespace std;

int fact(int n){
    if(n==0 || n==1){
        return 1;
    }
    return (n)*fact(n-1);
}
int main(){
    int x;
    cout<<"Enter a number:";
    cin>>x;
    cout<<"factorial of "<<x<<" is "<< fact(x);
    return 0;
}



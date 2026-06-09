// wap to write function to find factorial
#include<bits/stdc++.h>
using namespace std;

int factorial(int n){
    if(n==0 || n==1){
        return 1;
    }
    else
        return (n)*factorial(n-1);
}
int main(){
    int x;
    cout<<"Enter x:";
    cin>>x;
    cout<<"the factorial of "<<x<<" is: "<<factorial(x);
    return 0;
}

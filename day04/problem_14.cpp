
// wap to find Fibonacci of nth term
#include<bits/stdc++.h>
using namespace std;

int fib(int n){
    if(n==0){
        return 0;
    }
    else if(n==1){
        return 1;
    }
    else {
        return fib(n-1) + fib(n-2);
    }
}
int main(){
    int n;
    cout<<"Enter the term number: ";
    cin>>n;
    cout<<"Fibonacci of "<<n<<" is: "<<fib(n);
    return 0;

}

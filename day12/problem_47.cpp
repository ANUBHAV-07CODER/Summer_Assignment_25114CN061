// wap to write function for fibonacci
#include<bits/stdc++.h>
using namespace std;

int fibonacci(int n){
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    return fibonacci(n-1) + fibonacci(n-2);
    
}
int main(){
    int x;
    cout<<"Enter x:";
    cin>>x;
    cout<<fibonacci(x);
    return 0;
}


// wap to check armstrong number
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter number: ";
    cin>>n;
    int sum =0;
    int rem;
    int temp=n;
    while(n>0){
        rem = n%10;
        sum = sum + rem*rem*rem;
        n = n/10;
    }
    if(sum == temp){
        cout<<temp<<" is an armstrong number.";
    }
    else {
        cout<<temp<<" is not an armstrong number.";
    }
    return 0;
}

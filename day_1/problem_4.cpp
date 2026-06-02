
// wap to count digit in a number.
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    int temp=n;
    int count=0;
    while(n>0){
        count++;
        n=n/10;
    }
    cout<<"The number of digits in "<<temp<<" is: "<<count;
    return 0;
}
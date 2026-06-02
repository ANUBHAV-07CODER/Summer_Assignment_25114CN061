
// wap to find product of digits
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    int prod = 1;
    int digit;
    while(n>0){
        digit = n%10;
        prod *= digit;
        n = n/10;
    }
    cout<<"Product of digits of the given number is: "<<prod<<"\n";
    return 0;
}


// wap to find sum of digits of a number
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    int sum = 0;
    int digit;
    while(n>0){
        digit = n%10;
        sum += digit;
        n = n/10;
    }
    cout<<"Sum of digits of the given number is: "<<sum<<"\n";
    return 0;
}

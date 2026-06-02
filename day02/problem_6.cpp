
// wap to reverse a number
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    int rev = 0;
    int digit;
    while(n>0){
        digit = n%10;
        rev = rev*10 + digit;
        n = n/10;
    }
    cout<<"Reverse of the given number is: "<<rev<<"\n";
    return 0;
}

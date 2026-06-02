
// wap to check whether a number is palindrome 
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    int rev = 0;
    int digit;
    int temp = n;
    while(n>0){
        digit = n%10;
        rev = rev*10 + digit;
        n = n/10;
    }
    if(temp == rev){
        cout<<"The given number is a palindrome."<<"\n";
    }
    else {
        cout<<"The given number is not a palindrome."<<"\n";
    }
    return 0;
}

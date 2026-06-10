// wap to write function for palindrome
#include<bits/stdc++.h>
using namespace std;

int palindrome(int n){
    int rev=0,rem;
    int temp=n;
    while(n>0){
        rem = n%10;
        rev = rev*10 + rem;
        n = n/10;
    }
    if(temp == rev){
        cout<<"this is palindrome";
    }
    else{
        cout<<"this is not palindrome";
    }
}
int main(){
    int x;
    cout<<"Enter x:";
    cin>>x;
    palindrome(x);
    return 0;
}


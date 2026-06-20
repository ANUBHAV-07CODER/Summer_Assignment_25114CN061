// wap to check palindrome string 
#include<bits/stdc++.h>
using namespace std;

int main(){
    char str[100];
    cout<<"Enter a string:";
    cin.getline(str,100);
     int len =0;
    while(str[len] != '\0'){
        len++;
    }
    bool palindrome = true;
    for(int i=0;i<len/2;i++){
        
        if(str[i] != str[len-1-i]){
            palindrome = false;
            break;
        }
    }
    if(palindrome){
        cout<< "palindrome";
    }
    else{
        cout<<"not palindrome";
    }
    return 0;
}

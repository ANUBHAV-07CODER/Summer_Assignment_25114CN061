// wap to find string length without strlen()
#include<bits/stdc++.h>
using namespace std;

int str_len(char str[100]){
    int count =0;
    while(str[count] != '\0'){
        count++;
    }
    return count;
}
int main(){
    char str[100];
    cout<<"Enter a string:";
    cin.getline(str,100); 
    cout<<"length of string: "<< str_len(str);
    return 0;
}

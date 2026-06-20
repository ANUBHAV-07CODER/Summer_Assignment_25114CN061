// wap to reverse a string
#include<bits/stdc++.h>
using namespace std;

int rev_str(char str[]){
     int len =0;
    while(str[len] != '\0'){
        len++;
    }
    for(int i=len -1;i>=0;i--){
        cout<<str[i];
    }
}
int main(){
    char str[100];
    cout<<"Enter a string:";
    cin.getline(str , 100);

    cout<<" Reversed string:"<<rev_str(str);
    return 0;
}

// wap to check anagram string
#include<bits/stdc++.h>
using namespace std;

int main(){
    char str1[100],str2[100];
    cout<<"Enter a string1:";
    cin.getline(str1,100);
    cout<<"Enter a string2:";
    cin.getline(str2,100);
    if(strlen(str1) != strlen(str2)){
        cout<< "not anagram";
    }
    else{
        sort(str1,str1+strlen(str1));
        sort(str2,str2+strlen(str2));
        if(strcmp(str1,str2) == 0){
            cout<<"anagram";
        }
        else{
            cout<<"not anagram";
        }
    }
    return 0;
}

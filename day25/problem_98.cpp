// wap to find common character in string 
#include<bits/stdc++.h>
using namespace std;

int main(){
    string str1,str2;
    cout<<"Enter str1:";
    getline(cin,str1);
    cout<<"Enter str2:";
    getline(cin,str2);
    cout<<"common character:";
    for(int i=0;i<str1.length();i++){
        for(int j=0;j<str2.length();j++){
            if(str1[i] == str2[j]){
                cout<<str1[i]<<" ";
                break;
            }
        }
    }
    return 0;
}

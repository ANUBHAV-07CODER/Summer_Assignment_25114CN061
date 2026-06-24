// wap to check string rotation
#include<bits/stdc++.h>
using namespace std;

int main(){
    string str1,str2;
    cout<<"Enter both string:";
    cin >> str1 >> str2;
    if(str1.length() != str2.length()){
        cout<<"Not Rotation";
        return 0;
    }
    string temp = str1 + str1;
    if(temp.find(str2) != string::npos){
        cout<<"Rotation";
    }
    else{
        cout<<"Not Rotation";
    }
    return 0;
}

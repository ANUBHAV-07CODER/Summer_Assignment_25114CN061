// wap to sort word by length
#include<bits/stdc++.h>
using namespace std;

int main(){
    string word[5];
    cout<<"Enter 5 word:";
    for(int i=0;i<5;i++)
        cin>>word[i];
    for(int i=0;i<4;i++){
        for(int j=i+1;j<5;j++){
            if(word[i].length() > word[j].length()){
                swap(word[i],word[j]);
            }
        }
    }
    cout<<"word sorted by length:\n";
    for(int i=0;i<5;i++){
        cout<<word[i]<<" ";
    }
    return 0; 
}

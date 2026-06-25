// wap to sort names alphabetically
#include<bits/stdc++.h>
using namespace std;

int main(){
    string name[5];
    cout<<"Enter 5 names:";
    for(int i=0;i<5;i++)
        cin>>name[i];
    for(int i=0;i<4;i++){
        for(int j=i+1;j<5;j++){
            if(name[i] > name[j]){
                swap(name[i],name[j]);
            }
        }
    }
    cout<<"The name in alphabetically order:\n";
    for(int i=0;i<5;i++){
        cout<<name[i]<<" ";
    }
    return 0;
}

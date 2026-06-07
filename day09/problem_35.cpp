
// wap to print repeated character pattern not in reverse order
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    char ch;
    cout<<"enter number of rows:";
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<char(i+65);
        }
    cout<<endl;
       
    }
    return 0;
}

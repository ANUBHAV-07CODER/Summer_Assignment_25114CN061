// wap to write function to find maximum
#include<bits/stdc++.h>
using namespace std;

int maximum(int a, int b){
    if(a>b){
        return a;
    }
    else{
        return b;
    }    
}
int main(){
    int x;
    cout<<"Enter x:";
    cin>>x;
    int y;
    cout<<"Enter y:";
    cin>>y;
    cout<<"the maxixmum number is: "<<maximum(x,y);
    return 0;
}


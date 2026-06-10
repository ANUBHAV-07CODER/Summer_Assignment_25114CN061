// wap to write function for perfect number
#include<bits/stdc++.h>
using namespace std;

int perfect(int n){
    int sum = 0;
    for(int i=1;i<n;i++){
        if(n%i == 0){
            sum += i;
        }
    }
    if(sum==n){
        cout<<"Perfect number";
    }
    else{
        cout<<"Not Perfect number";
    }
}
int main(){
    int x;
    cout<<"Enter x:";
    cin>>x;
    perfect(x);
    return 0;
}


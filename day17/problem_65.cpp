// wap to merge array
#include<bits/stdc++.h>
using namespace std;

int main(){
    int a[]={1,2,3};
    int b[]={4,5,6};
    int merged[6];
    int *ptr= merged;
    for(int i=0;i<3;i++){
        *ptr++=a[i];
    }
    for(int i=0;i<3;i++){
        *ptr++=b[i];
    }
    for(int i=0;i<6;i++){
        cout<< merged[i] <<" ";
    }
    return 0;
}

// wap to union of array
#include<bits/stdc++.h>
using namespace std;

int main(){
    int a[]={1,2,3};
    int b[]={4,5,6};
    int u[6];
    int*end = set_union(a,a+3,b,b+3,u);
    for(int *i=u; i!= end ; i++){
        cout<< *i <<" ";
    }
    return 0;
}


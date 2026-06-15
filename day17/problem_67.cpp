// wap to intersection of array
#include<bits/stdc++.h>
using namespace std;

int main(){
    int a1[]={1,2,3};
    int b2[]={4,3,6};
    
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(a1[i]==b2[j]){
                cout<< a1[i]<<" ";
            }
        }
    }
    
    return 0;
}

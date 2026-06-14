// wap to find maximum frequency element
#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[]={1,2,3,2,4,2,5,3,3};
    int n= sizeof(arr)/sizeof(arr[0]);
    int count[10]={0};
    for(int i=0;i<n;i++){
        count[arr[i]]++;
    }
    int maxfreq=0,result=-1;
    for(int i=0;i<10;i++){
        if(count[i]>maxfreq){
            maxfreq = count[i];
            result=i;
        }
    }
    cout<<"maximum frequency element:"<<result;
    return 0;
}


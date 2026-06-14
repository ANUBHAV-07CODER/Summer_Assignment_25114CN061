// wap to find missing number in array
#include<bits/stdc++.h>
using namespace std;

int findmissing(int arr[],int n){
    int total = n*(n+1)/2;
    for(int i=0;i<n-1;i++){
        total -= arr[i];
    }
    return total;
}

int main(){
    int arr[]={1,2,4,5,6};
    int n=6;
    cout<<"Missing number:"<<findmissing(arr,n)<<endl;
    return 0;
}

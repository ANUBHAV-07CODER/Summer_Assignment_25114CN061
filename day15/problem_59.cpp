// wap to rotate array right
#include<bits/stdc++.h>
using namespace std;

int arrayright(int arr[],int n){
    int last=arr[n-1];
    for(int i=n-1;i>0;i--){
        arr[i]=arr[i-1];
    }
    arr[0]=last;
}
int main(){
     int n;
    cout<<"Enter size:";
    cin>>n;
    int arr[n];
    cout<<"Enter element:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    arrayright(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}

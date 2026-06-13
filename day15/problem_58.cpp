// wap to rotate array left
#include<bits/stdc++.h>
using namespace std;

int arrayleft(int arr[],int n){
    int first=arr[0];
    for(int i=0;i<n-1;i++){
         arr[i]=arr[i + 1];
    }
    arr[n-1]=first;
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
    arrayleft(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}


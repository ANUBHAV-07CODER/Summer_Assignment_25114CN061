// wap to reverse an array
#include<bits/stdc++.h>
using namespace std;

int reverseArray(int arr[],int n){
    int start=0,end=n-1;
    while(start<end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
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
    reverseArray(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}

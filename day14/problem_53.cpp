// wap to linear search
#include<bits/stdc++.h>
using namespace std;

int linear_search(int arr[],int n,int key){
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            return i;
        }
    }
    return -1;
}
int main(){
    int arr[]={10,20,30,40,50};
    int n=5;
    int target;
    cout<<"Enter target element:";
    cin>>target;
    int result= linear_search(arr,5,target);
    if(result != -1){
        cout<<"element found at index :"<<result;
    }
    else{
        cout<<"element not found";
    }
    return 0;
}


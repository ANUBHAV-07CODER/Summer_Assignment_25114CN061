// wap to second largest element
#include<bits/stdc++.h>
using namespace std;

int sec_larg(int arr[],int n){
    int largest=arr[0];
    int second = arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>largest){
            second = largest;
            largest = arr[i];
        }
        else if(arr[i]>second && arr[i]!=largest){
            second = arr[i];
        }
    }
    return second;
}
int main(){
    int arr[]={10,20,30,40,50};
    int n=5;
    int result = sec_larg(arr,5);
    cout<<"Second largest element is: "<<result;
    return 0;
}

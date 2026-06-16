// wap to binary search
#include<bits/stdc++.h>
using namespace std;

int binarysearch(int arr[],int n,int key){
    int low = 0, high = n-1;
    int mid;
    while(low <= high){
        mid = (low + high)/2; 
    }
    if(mid == key){
        return mid;
    }
    else if (mid < key){
        return low = mid + 1;
    }
    else {
        return high = mid - 1;
    }
    return -1;
}
int main(){
    int arr[]={10,20,30,40,50};
    int n = 5;
    int key = 30;
    int result = binarysearch(arr,n,key);
    if(result != -1){
        cout<< "Element found at index "<< result;
    }
    else{
        cout<< "Element not found ";
    }
    return 0;
}

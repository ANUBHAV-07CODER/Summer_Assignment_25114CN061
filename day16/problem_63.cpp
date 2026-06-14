// wap to find pair with given sum
#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[]={1,4,3,2,6,5};
    int n= sizeof(arr)/sizeof(arr[0]);
    int target=7;
    sort(arr,arr+n);
    int left = 0, right=n-1;
    while(left<right){
        int sum = arr[left]+arr[right];
        if(sum == target){
            cout<< "pair: "<< arr[left]<<" + "<<arr[right]<<" = "<<target<< endl;
            left++;
            right--;
        }
        else if(sum<target){
            left++;
        }
        else{
            right--;
        }
    }
    return 0;
}



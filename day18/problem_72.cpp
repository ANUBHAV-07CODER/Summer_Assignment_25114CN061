// wap to sort array in descending order
#include<bits/stdc++.h>
using namespace std;

int descendingorder(int arr[],int n){
    int temp;
    for(int i=0;i<n-1;i++){
        for(int j = 0;j<n-i-1;j++){
            if(arr[j] < arr[j+1]){
                temp = arr[j];
                arr[j]= arr[j + 1];
                arr[j + 1]=temp;
            }
        }
    }
}
int main(){
    int arr[] = {5,2,8,1,9};
    int n= 5;
    descendingorder(arr,n);
    cout<< " Array in descending order:";
    for(int i=0;i<n;i++){
        cout<< arr[i]<<" ";
    }  
    return 0;
}

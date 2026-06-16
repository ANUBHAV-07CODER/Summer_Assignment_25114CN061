// wap to bubble sort
#include<bits/stdc++.h>
using namespace std;

int bubblesort(int arr[],int n){
    int temp;
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j] > arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;

            }
        }
    }
}
int main(){
    int arr[] = {5,3,8,4,2};
    int n = 5;
    bubblesort( arr,n );
    cout<< " Sorted array :";
    for(int i=0;i<n;i++){
        cout<< arr[i] <<" ";
    } 
    return 0;
}

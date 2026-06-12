// wap to find duplicates in array
#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[]={10,20,30,40,50,20,30};
    int n=7;
    cout<<"Duplicate elements in the array are: ";
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                cout<<arr[i]<<" ";
                break;
            }
        }
    }
    return 0;
}

// wap to frequency of an element
#include<bits/stdc++.h>
using namespace std;

int frequency(int arr[],int n,int key){
    int count=0;
    for(int i=0;i<n;i++){
        if(arr[i]==key){
         count++ ;
        }
    }
    return count;
}
int main(){
    int arr[]={10,20,30,40,50,20,20};
    int n=7;
    int target;
    cout<<"Enter target element:";
    cin>>target;
    int freq= frequency(arr,7,target);
    cout<<"frequency of "<<target<<" = "<<freq;
    return 0;
}



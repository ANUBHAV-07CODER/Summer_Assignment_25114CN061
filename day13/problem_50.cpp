// wap to find sum and average of array
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,sum=0;
    int avg;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"The elements of the array are: ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    for(int i=0; i<n; i++){
        sum += arr[i];
    }
    avg = (int)sum / n;
    cout<<"\nSum of the array is: "<<sum;
    cout<<"\nAverage of the array is: "<<avg;
    return 0;
}

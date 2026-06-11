// wap to find largest and smallest element 
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,sum=0;
    float avg;
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
    int largest = arr[0];
    int smallest = arr[0];
    for(int i=1; i<n; i++){
        if(arr[i] > largest){
            largest = arr[i];
        }
        if(arr[i] < smallest){
            smallest = arr[i];
        }
    }
    cout<<"\nLargest element in the array is: "<<largest;
    cout<<"\nSmallest element in the array is: "<<smallest;
    return 0;
}

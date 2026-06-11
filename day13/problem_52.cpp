// wap to count even or odd elements
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
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
    cout<<endl;
    int count_even=0;
    int count_odd=0;
    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            count_even++;
        }
        else{
            count_odd++;
        }
    }
    cout<<"even element: "<<count_even<<endl;
    cout<<"odd element: "<<count_odd<<endl;
    return 0;
}

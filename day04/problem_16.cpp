#include<bits/stdc++.h>
using namespace std;

int armstrong_range(int low, int high){
    for(int i=low; i<=high; i++){
        int sum =0;
        int rem;
        int temp=i;
        while(temp>0){
            rem = temp%10;
            sum = sum + rem*rem*rem;
            temp = temp/10;
        }
        if(sum == i){
            cout<<i<<" is an armstrong number."<<"\n";
        }
    }
}

int main(){
    int low, high;
    cout<<"Enter lower limit: ";
    cin>>low;
    cout<<"Enter upper limit: ";
    cin>>high;
    armstrong_range(low, high);

    return 0;
}
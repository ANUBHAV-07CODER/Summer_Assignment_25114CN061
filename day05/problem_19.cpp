// wap to print factors of a number
#include<bits/stdc++.h>
using namespace std;

int factor(int n){
    
    for(int i=1;i<=n;i++){
        if(n%i==0){
            cout<<i<<" ";
        }
    }
    return 0;
}
int main(){
    int n;
    cout<<"Enter number:";
    cin>>n;
    cout<<"Factors of "<<n<<" are: ";
    factor(n);

    return 0;
}


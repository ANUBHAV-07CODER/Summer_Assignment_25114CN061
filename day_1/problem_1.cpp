
// wap to calculate sum of first N natural number.
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number: ";
    cin >>n;    
    int sum=0;
    for(int i=1;i<=n;i++){
        sum+=i;
    }
    cout<<"The sum of first "<<n<<" natural numbers is: "<<sum;
    return 0;
}

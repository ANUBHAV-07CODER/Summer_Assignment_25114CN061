
// wap to calculate sum of first N natural numbers
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    int sum = 0;
    for(int i=1;i<=n;i++){
        sum += i;
    }
    cout<<"The sum of first "<<n<<" natural numbers is: "<<sum<<"\n";
    return 0;
}

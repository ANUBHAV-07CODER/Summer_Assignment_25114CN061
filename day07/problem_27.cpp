
// wap to recursive sum of digit
#include<bits/stdc++.h>
using namespace std;

int sumofdigit(int n){
    int sum=0, digit;
    int temp=n;
    while(temp>0){
        digit=temp%10;
        sum+=digit;
        temp/=10;
    }  
     return sum;
}
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    cout<<"Sum of digit of "<<n<<" is "<<sumofdigit(n)<<endl;
    return 0;
}





// wap to print multiplication table of a given number.
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number:";
    cin>>n;
    cout<<"the multiplication table of "<<n<< " is: \n";
    for(int i=1;i<=10;i++){
        cout<<n<<"x"<<i<<"="<<n*i<<"\n";
    }

    return 0;
}

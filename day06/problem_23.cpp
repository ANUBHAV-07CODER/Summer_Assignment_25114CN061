
// wap to count set bits in a number
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;
    int count=0;
    while(n>0){
        n = n & (n-1); // Brian Kernighan's method
        count++;
    }
    cout << "Number of set bits: " << count << endl;
    return 0;
}



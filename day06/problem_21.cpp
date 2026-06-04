
// wap to convert decimal to binary
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout << "Enter a decimal number: ";
    cin >> n;
    int binary=0 , power=1;
    while(n>0){
        int rem = n%2;
        binary += rem*power;
        power *= 10;
        n /= 2;
    }
    cout << "Binary form of that decimal number is: " << binary << endl;
    return 0;
}

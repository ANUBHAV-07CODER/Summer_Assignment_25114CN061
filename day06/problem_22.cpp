
// wap to convert binary to decimal
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout << "Enter a binary number: ";
    cin >> n;
    int decimal=0 , power=1;
    while(n>0){
        int rem = n%10;
        decimal += rem*power;
        power *= 2;
        n /= 10;
    }
    cout << "Decimal form of that binary number is: " << decimal << endl;
    return 0;
}

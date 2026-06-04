
// wap to find x^n without pow()
#include<bits/stdc++.h>
using namespace std;

int main(){
    int x, n;
    cout << "Enter base (x) and exponent (n): ";
    cin >> x >> n;
    int result = 1;
    for(int i=0; i<n; i++){
        result *= x;
    }
    cout << x << "^" << n << " = " << result << endl;
    return 0;
}

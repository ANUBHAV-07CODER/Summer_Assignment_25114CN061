// wap to convert lowercase to uppercase
#include <bits/stdc++.h>
using namespace std;

int main(){
    char str[100];

    cout << "Enter a string: ";
    cin.getline(str, 100);

    for(int i = 0; str[i] != '\0'; i++){
        str[i] = toupper(str[i]); 
    }
    cout << "Uppercase String = " << str;
    return 0;
}

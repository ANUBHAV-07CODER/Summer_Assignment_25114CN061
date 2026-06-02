// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int n;
//     cout<< "enter number:";
//     cin>>n;
//     int sum=0;
//     int digit;
//     int temp = n;
//     while(n>0){
//         digit = n%10;
//         sum += digit;
//         n = n/10;
//     }
//     cout<<"the sum of digit of "<<temp<< " is: "<< sum;
//     return 0;
// }



// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int n;
//     cout<<"enter number:";
//     cin>>n;
//     int rev = 0,rem;
//     int temp=n;
//     while(n>0){
//         rem = n%10;
//         rev = rev*10 + rem;
//         n/=10;
//     }
//     cout<<"the reverse of "<<temp<< " is: "<<rev;

//     return 0;
// }



// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int n;
//     cout<<"enter number:";
//     cin>>n;
//     int prod = 1,rem;
//     int temp=n;
//     while(n>0){
//         rem = n%10;
//         prod *=  rem;
//         n/=10;
//     }
//     cout<<"the product of "<<temp<< " is: "<<prod;

//     return 0;
// }



#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"enter number:";
    cin>>n;
    int rev = 0,rem;
    int temp=n;
    while(n>0){
        rem = n%10;
        rev = rev*10 + rem;
        n/=10;
    }
    if (rev == temp){
        cout<<"this is palindrome";
    }
    else {
        cout<<"this is not palindrome";
    }
    return 0;
}
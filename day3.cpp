// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int n;
//     cout<<"Enter number:";
//     cin>>n;
//     int is_prime=1;
//     for(int i=2;i<=sqrt(n);i++){
//         if(n%i==0){
//             is_prime=0;
//             break;
//         }
//     }
//     if(is_prime==1 && n>1){
//         cout<<n<<" is Prime number";
//     }
//     else{
//         cout<<n<<" is Not Prime number";
//     }
//     return 0;
// }



// #include<bits/stdc++.h>
// using namespace std;

// int prime_range(int a, int b){
//     int prime;
//     for(int i=a;i<=b;i++){
//         if(i<2){
//             continue;
//         }
//         prime = 1;
//         for(int j=2;j<i;j++){
//             if(i%j==0){
//               prime=0;
//               break;
//             }
//         }
//         if(prime == 1){
//             cout<<i<<" ";
//         }
//     }
// }

// int main(){
//     int a,b;
//     cout<<" Enter a and b :";
//     cin>>a>>b;
//     prime_range(a,b);
//     return 0;
// }








// #include<bits/stdc++.h>
// using namespace std;

// int gcd(int a,int b){
//     if(b==0){
//         return a;
//     }
//     else {
//         return gcd(b,a%b);
//     }
// }


// int main(){
//     int a,b;
//     cout<<"Enter two numbers:";
//     cin>>a>>b;
//     cout<<"GCD of "<<a<<" and "<<b<<" is "<<gcd(a,b);
//     return 0;
// }



// #include<bits/stdc++.h>
// using namespace std;

// int gcd(int a,int b){
//     if(b==0){
//         return a;
//     }
//     else {
//         return gcd(b,a%b);
//     }

// }


// int main(){
//     int a,b;
//     cout<<"Enter two numbers:";
//     cin>>a>>b;
//     cout<<"LCM of "<<a<<" and "<<b<<" is "<<(a*b)/gcd(a,b);
//     return 0;
// }
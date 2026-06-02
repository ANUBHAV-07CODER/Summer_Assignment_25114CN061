
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number: ";
    cin >>n;    
    int sum=0;
    for(int i=1;i<=n;i++){
        sum+=i;
    }
    cout<<"The sum of first "<<n<<" natural numbers is: "<<sum;
    return 0;
}




#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number:";
    cin>>n;
    for(int i=1;i<=10;i++){

    cout<<"the multiplication table of "<<n<< " is: "<<n<<"x"<<i<<"="<<n*i<<"\n";
    }

    return 0;
}



// #include<bits/stdc++.h>
// using namespace std;

// int fact(int n){
//     if(n==0 || n==1){
//         return 1;
//     }

// return (n)*fact(n-1);
// }
// int main(){
//     int x;
//     cout<<"Enter a number:";
//     cin>>x;
//     cout<<"factorial of "<<x<<" is "<< fact(x);
//     return 0;
// }



// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int n;
//     cout<<"Enter a number: ";
//     cin>>n;
//     int temp=n;
//     int count=0;
//     while(n>0){
//         count++;
//         n=n/10;
//     }
//     cout<<"The number of digits in "<<temp<<" is: "<<count;
//     return 0;
// }
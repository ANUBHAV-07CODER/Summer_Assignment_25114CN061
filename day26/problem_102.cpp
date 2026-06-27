// wap to create voting eligibility system
#include<bits/stdc++.h>
using namespace std;

int main(){
    int age;
    cout<<"Enter your age:";
    cin >> age;
    if(age<0){
        cout<<"Invalid age";
    }
    else if(age>=18){
        cout<<"Eligible for voting";
    }
    else{
        cout<<"Not Eligible for voting";
    }
    return 0;
}

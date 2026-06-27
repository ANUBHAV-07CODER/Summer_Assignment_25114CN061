// wap to create ATM simulation
#include<bits/stdc++.h>
using namespace std;

int main(){
    int option;
    float balance = 10000, amount;
    cout<<"---Welcome To ATM!---\n";
    cout<<"choose your option\n";
    cout<<"1. deposit cash\n";
    cout<<"2. withdrawl cash\n";
    cout<<"3. check balance\n";
    cout<<"4. Exit\n";
    cin>>option;
    switch(option){
        case 1:
            cout<<"Enter amount to deposit:";
            cin>>amount;
            balance += amount;
            cout<<"Amount deposited successfully\n";
            cout<<"updated balance = "<< balance;
            break;

        case 2:
            cout<<"Enter amount to withdrawl:";
            cin>>amount;
            if(amount <= balance){
                balance -= amount;
                cout<<"Please collect your cash\n";
                cout<<"updated balance = "<< balance;
            }
            else{
                cout<<"Insufficient balance";
            }
            break;

        case 3:
            cout<<"current balance :"<<balance;
            break;

        case 4:
            cout<<"thank you visit again.";
            break;

        default:
            cout<<"Invalid option:";
    }
    return 0;
}

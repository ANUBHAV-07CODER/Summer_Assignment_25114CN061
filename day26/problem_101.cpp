// wap to create a number guessing game 
#include<bits/stdc++.h>
using namespace std;

int main(){
    srand(time(0));
    int num = rand() % 100 + 1;
    int guess;
    cout<<" guess a number between 1 to 100 \n";
    do{
        cout<<"enter your guess:";
        cin>>guess;

        if(guess > num){
            cout<<"Too high \n";
        }
        else if( guess < num){
            cout<<"Too low \n";
        }
        else{
            cout<<"Congratulation you guess the correct number";
        }
    }while(guess != num);
return 0;
}

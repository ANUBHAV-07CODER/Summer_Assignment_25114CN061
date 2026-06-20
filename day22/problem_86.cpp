// wap to count word in a sentence
#include<bits/stdc++.h>
using namespace std;

 int main(){
    char str[100];
    cout<<"Enter a sentence:";
    cin.getline(str,100);
    int count_word=1;
   for(int i=0;str[i] != '\0';i++){
        if(str[i] == ' '){
         count_word++;
        }
    }
    cout<<"Number of words :" << count_word;
    return 0;
}

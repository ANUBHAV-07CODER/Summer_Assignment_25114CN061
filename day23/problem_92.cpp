// wap to find maximum occuring character
#include<bits/stdc++.h>
using namespace std;

int main(){
    char str[100];
    cout<<"Enter a string:";
    cin.getline(str,100);
    int len = strlen(str);
    int maxcount = 0;
    char maxchar;
    for(int i=0;i<len;i++){
        int count =0;
        for(int j=0;j<len;j++){
            if(str[j]==str[i]){
                count++;
            }
        }
        if(count>maxcount){
            maxcount = count;
            maxchar = str[i];
        }
    }
    cout<<"maximum occuring character :"<<maxchar<<endl;
    cout<<"count:"<<maxcount<<endl;
    return 0;
}

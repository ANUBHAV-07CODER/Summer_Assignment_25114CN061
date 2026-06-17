// wap to find diagonal sum
#include<bits/stdc++.h>
using namespace std;

int main(){
     int n;
   int a[3][3];
   int sum=0;
   cout<< "enter order of sq. matrix:";
   cin>>n;
    cout<<"enter matrix element:"<<endl;
   for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        cin>>a[i][j];
    }
   }
   for(int i=0;i<n;i++){
    sum+=a[i][i];
   }
   cout<<"diagonal sum:"<<sum;
   return 0;
}

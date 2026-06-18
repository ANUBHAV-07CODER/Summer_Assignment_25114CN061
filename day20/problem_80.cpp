// wap to find column-wise sum
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    int a[3][3],t[3][3];
    cout<< "enter row:";
    cin>>n;
    cout<< "enter column:";
    cin>>m;
    cout<<"enter matrix element:"<<endl;
    for(int i=0;i<n;i++){
     for(int j=0;j<m;j++){
        cin>>a[i][j];
    }
   } 
   cout<<"column wise sum:\n";
   for(int j=0;j<m;j++){
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=a[i][j];
    }
    cout<<"sum of column "<<j+1<<" = "<<sum<<endl;
   }
   return 0;
}

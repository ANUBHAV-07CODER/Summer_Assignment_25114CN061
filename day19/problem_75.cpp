// wap to transpose matrix
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
   for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        t[j][i]=a[i][j];
    }
   }
   cout<<"transpose matrix is: \n";
    for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
        cout<<t[i][j]<<" ";
    }
    cout<< endl;
   }
   return 0;
}

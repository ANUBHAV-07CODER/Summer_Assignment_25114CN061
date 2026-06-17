// wap to subtract matrices
#include<bits/stdc++.h>
using namespace std;


int main(){
   int n,m;
   int a[3][3],b[3][3];
   cout<< "enter row:";
   cin>>n;
   cout<< "enter column:";
   cin>>m;
   for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        cout<<"enter first matrix element:"<<endl;
        cin>>a[i][j];
    }
   }
    for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        cout<<"enter second matrix element:"<<endl;
        cin>>b[i][j];
    }
   }
    cout<<"the difference of first and second matrix is :\n";

    for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        cout<<a[i][j] - b[i][j]<<" ";
    }
    cout<<endl;
   }
   return 0;
}

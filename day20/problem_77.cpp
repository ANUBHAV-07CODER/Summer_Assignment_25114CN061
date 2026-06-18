// wap to multiply matrices
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
   int a[3][3],b[3][3];
   cout<< "enter row:";
   cin>>n;
   cout<< "enter column:";
   cin>>m;
    cout<<"enter first matrix element:\n";
   for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        cin>>a[i][j];
    }
    cout<<endl;
   }
   cout<<"enter second matrix element:\n";
    for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        cin>>b[i][j];
    }
    cout<<endl;
   }
   cout<<"the multiplication of matrices is:\n";
    for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        cout<< a[i][j]*b[i][j]<<" ";
    }
    cout<<endl;
   }
   return 0;  
}

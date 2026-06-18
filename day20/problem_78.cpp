// wap to check symmetric matrix
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
    for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        cout<<t[i][j]<<" ";
    }
    cout<< endl;
   }
   bool symmetric = true;
   for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        if(a[i][j] != t[i][j]){
            symmetric = false;
            break;
        }
    }
   }
   if(symmetric){
    cout<<"this is symmetric matrix:";
   }
   else{
    cout<< "not symmetric matrix:";
   }
   return 0;
}

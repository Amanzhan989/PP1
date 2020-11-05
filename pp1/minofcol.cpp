#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int a[n][m];
    int mini;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
    for(int j=0;j<m;j++){
       mini=a[0][j];
       for(int i=0;i<n;i++){
           if(a[i][j]<mini){  
            mini=a[i][j];
            }
       }cout<<mini<<endl;
    }   
}
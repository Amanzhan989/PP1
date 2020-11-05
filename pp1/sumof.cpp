#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int a[n][m];
    int r[n],c[m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }for(int i=0;i<n;i++){
        r[i]=0;
    for(int j=0;j<m;j++)
        r[i]+=a[i][j];
    
    }for(int j=0;j<m;j++){
        c[j]=0;
    for(int i=0;i<n;i++)
        c[j]+=a[i][j];
    
    }for(int i=0;i<n;i++)
        cout<<i+1<<" "<<r[i]<<endl;
    
    for(int j=0;j<m;j++)
        cout<<j+1<<" "<<c[j]<<endl;
    
        
}

    
          

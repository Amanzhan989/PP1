#include<iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int max=-(1e9);
    for(int i=0;i<n;i++){
    int x;
    cin>>x;
 if(max<x) max=x;
    }cout<<max;
}
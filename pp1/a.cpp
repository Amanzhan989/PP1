#include<iostream>
using namespace std;
int main(){
string s;
cin>>s;
int n=0,k=0;
for(int i=0;i<s.size();i++){
    if(s[i]>='a' && s[i]<='z') n++;
    else k++;
}cout<<k<<" "<<n;
}

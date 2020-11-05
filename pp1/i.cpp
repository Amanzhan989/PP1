#include<iostream>
using namespace std;
int main(){
    string s,t;
    cin>>s>>t;
    int cnt=0;
    for(int i=0;i<s.size();i++){
        for(int j=0;j<t.size();j++){
            if(s[i]==t[j])
            cnt++;
        }
    }if(cnt==s.size()) cout<<"Yes";
    else cout<<"No";
}
#include <bits/stdc++.h>
using namespace std;
bool Valid(string s,int n){
    int cnt=0;
    for(int i=0;i<s.size();++i){
        char c=s[i];
        if(c>='0' and c<='9'){
            cnt++;
        }
        else cnt=0;
        if(cnt==n){
            return true;
        }
    }
    return false;
}
int main(){
    string s; cin>>s;
    int n; cin>>n;
    if(Valid(s,n)==true) cout<<"YES" ;
    else cout<<"NO";
}
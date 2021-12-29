//не палиндром 
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(){
    string s;
    cin>>s;
    string t;
    string ans="";
    for(int i=0;i<s.size();++i){
        s[0]=t[i];
        s[i]+=t[i];
    }
    for(int i=s.size()-1;i>=0;++i){
        ans+=s[i];
        

    }
    if(ans==s) cout<<"YES";
    else cout<<"NO";
    return 0;

    
    
    
}
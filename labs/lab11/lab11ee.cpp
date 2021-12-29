//выевсти какие буквы встречаются во всех словах 
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n ;cin>>n;
    int p=n;
    map<char,int> mp;
    map<char,int> :: iterator it;
    bool ok=false;
    string s;
    while(n--){
        cin>>s;
        set<char> st;
        set<char> :: iterator it1;
        for(int i=0;i<s.size();++i){
            st.insert(s[i]);
        }
        for(it1=st.begin();it1!=st.end();++it1){
            mp[*it1]++;
        }
    }
    for(it=mp.begin();it!=mp.end();++it){
        if(it->second>=p){
            cout<<it->first<<" ";
            ok=true;
        }
    }
    if(!ok) cout<<"NO COMMON CHARACTERS";
}

//strings

/*#include <iostream>
#include <map>
using namespace std;

int main(){
    int n; cin >> n;
    map<string, int> mp;

    for(int i = 1; i <= n; i++){
        string s; cin >> s;
        mp.insert(make_pair(s, i));
    }
    //for(auto i : mp) cout << i.first << " " << i.second << endl;
    map<string, int> :: iterator it;
    for(it=mp.begin();it!=mp.end();++it){
        cout<<it->first<<" "<<it->second<<endl;
    }
}
*/

#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    map<string,int> mp;
    for(int i=0;i<n;++i){
        string s; cin>>s;
        
        
        if(mp[s]==0){
            mp[s]=i+1;
        }

    }
    map <string,int> :: iterator it;
    for(it=mp.begin();it!=mp.end();it++){
        cout<<it->first<<" "<<it->second<<endl;
    }
}


//вывести сколько номеров встреч три раз

#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    map<string, int> mp;
    int cnt=0;
    while(n--){
        string s; cin>>s;
        mp[s]++;
    }
    map<string,int > :: iterator it;
    for(it=mp.begin();it!=mp.end();it++){
        if(it->second==3) cnt++;
    }
    cout<<cnt;
}
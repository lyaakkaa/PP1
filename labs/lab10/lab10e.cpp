//вывести города в процент 
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    int res=0;
    map<string,double> mp;
    map<string,double> :: iterator it;

    while(n--){
        int m; cin>>m;
        while(m--){
            string s; double x;
            cin>>s>>x;
            res+=x;
            mp[s]+=x;
        }
    }
    for(it=mp.begin();it!=mp.end();++it){
        it->second=it->second*100/res;
    }
    for(it=mp.begin();it!=mp.end();++it){
        cout<<it->first<<" "<<it->second<<endl;
    }
}

//даны строчки и их очки
//надо вывести каждый случай
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    int x,y;
    multimap<pair<string,string> ,int > mp;
    while(n--){
        string s,t;
        cin>>s>>x;
        cin>>t>>y;
        mp.insert( make_pair (make_pair (s,t),x+y ) );
    }
    multimap<pair<string,string> ,int > :: iterator it;
    for(it=mp.begin();it!=mp.end();++it){
        if(x==y){
            cout<<it->first.first<<" and "<<it->first.second<<" "<<it->second<<endl;
            break ;
        }
        cout<<it->first.first<<" and "<<it->first.second<<" "<<it->second<<endl;
    }
}
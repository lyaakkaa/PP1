//почситать сумму пар и остортировать индексы
/*
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    int i=0;
    multimap<int,int> mp;
    while(n--){
        int x,y; cin>>x>>y;
        i++;
        mp.insert(make_pair(x+y,i));
        
    }
    multimap<int,int> ::iterator it;
    for(it=mp.begin();it!=mp.end();++it){
        cout<<it->second<<" ";
    }

}
*/
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    vector<pair<int,int> > v;
    int i=0;
    while(n--){
        int a,b; cin>>a>>b;
        i++;
        v.push_back(make_pair(a+b,i));

    }
    sort(v.begin(),v.end());
    vector <pair<int , int > > :: iterator it;
    for(it=v.begin();it!=v.end();it++){
        cout<<it->second<<" ";
    }

}



#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    double res=0;
    map<string,double> mp;
    map<string,double> :: iterator it;
    while(n--){
        string s; int x; 
        cin>>s>>x;
        res+=x;
        if(!mp[s]) mp[s]=x;
        else mp[s]+=x;
    }
    map<double,string> mp1;
    
    map<double,string> :: reverse_iterator it1;
    for(it=mp.begin();it!=mp.end();++it){
        it->second=it->second*100/res;
    }

    for(it=mp.begin();it!=mp.end();++it){
        mp1[it->second]=it->first;
    }
    for(it1=mp1.rbegin();it1!=mp1.rend();++it1){
        cout<<it1->second<<" "<<it1->first<<"%"<<endl;
    }
}

#include <bits/stdc++.h>
using namespace std;
int main(){
    set<pair<string,int> > st;
    map <string,int> mp;
    bool ok=false;
    int n; cin>>n;
    while(n--){
        string s;
        int x; 
        cin>>s>>x;
        st.insert(make_pair(s,x));

    }
    set<pair<string,int> > :: iterator it;
    for(it=st.begin();it!=st.end();++it){
        mp[it->first]++;
    }
    map <string,int> :: iterator it1;
    for(it1=mp.begin();it1!=mp.end();++it1){
        if(it1->second>=3){
            //ok=true;
            cout<<it1->first<<" +1"<<endl;
            //cout<<it1->first<<" "<<it1->second<<endl;

        }
        else  cout<<it1->first<<" NO BONUS"<<endl;
    }


}
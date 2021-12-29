#include <bits/stdc++.h>
using namespace std;
bool comp(pair<string,float> &p1, pair<string,float> &p2 ){
    if(p1.second==p2.second){
        return p1.first>p2.first;
    }
    return p1.second>p2.second;
}

int main(){
    int n; cin>>n;
    float sum=0;
    map <string, float> mp;
    vector <float> v(n);
    vector <string> vv(n);
    for(int i=0;i<n;++i){
        cin>>vv[i]>>v[i];
        sum+=v[i];
    }
    for(int i=0;i<n;++i){
        mp[vv[i]]+=((v[i]/sum)*100);

    }
    vector <pair<string,float> > vec(mp.begin(),mp.end());
    sort(vec.begin(),vec.end(),comp);
    vector <pair<string,float> > :: iterator it;
    for(it=vec.begin();it!=vec.end();++it){
        cout<<it->first<<" "<<it->second<<"%\n";
    }

}
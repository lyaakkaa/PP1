#include <bits/stdc++.h>
using namespace std;

bool cmp(pair<string,float> &a, pair<string,float> &b){
    if(a.second==b.second){
        return a.first<b.first;
    }
    return a.second>b.second;
}

int main(){
    int n; cin>>n;
    map<string,float> mp;
    vector<string> names;
    vector<float> marks;
    float sum=0;
    while(n--){
        string s; cin>>s;
        float x; cin>>x;
        names.push_back(s);
        marks.push_back(x);
        sum+=x;
        

    }
    for(int i=0;i<names.size();++i){
        for(int j=0;j<marks.size();++j){
            mp[names[i]]+=(marks[j]*100/sum);
        }
    }
    vector<pair<string,float> > vec;
    vector<pair<string,float> > :: iterator it;
    map<string,float> :: iterator itt;
    for(itt=mp.begin();itt!=mp.end();++itt){
        vec.push_back(make_pair(itt->first,itt->second));
    }
    sort(vec.begin(),vec.end(),cmp);
    for(it=vec.begin();it!=vec.end();++it){
        cout<<it->first<<" "<<it->second<<endl;
    }

    
}
//Неправильно
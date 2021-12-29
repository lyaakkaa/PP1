#include <bits/stdc++.h>
using namespace std;
int main(){
    int x0,y0,n;
    cin>>x0>>y0>>n;

    map<double,pair<int,int> > mp;

    while(n--){
        int x,y; cin>>x>>y;
        double res=sqrt(pow(x-x0, 2) + pow(y-y0, 2));
        mp[res]=make_pair(x,y);
    }
    map<double,pair<int ,int > > :: iterator it;
    for(it=mp.begin();it!=mp.end();++it){
        cout<<it->second.first<<" "<<it->second.second<<endl;
    }
}

//мое решение
// но оно не прошло
//алмат и хор
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    vector <int> v;
    while(n--){
        int x; cin>>x;
        v.push_back(x);
    }
    int cnt=0;
    for(int i=0;i<v.size();++i){
        for(int j=0;j<v.size();++j){
            if(i<j){
                if(find(v.begin(),v.end(),v[i]^v[j])!=v.end()) cnt++;
            }
        }
    }
    cout<<cnt;
}
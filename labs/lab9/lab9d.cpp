
//сколько раз встреч число х

#include <bits/stdc++.h>
using namespace std;



int Found(vector<int> v,int k){
    int cnt=0;
    for(int i=0;i<v.size();++i){
        if(v[i]==k){
            cnt++;
        }
    }
    return cnt;
}
int main(){
    int n; cin>>n;
    int k; cin>>k;
    vector <int> v;
    while(n--){
        int x; cin>>x;
        v.push_back(x);
    }
    cout<<Found(v,k);
}
/*
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,k; cin>>n>>k;
    map<int,int> mp;
    while(n--){
        int x; cin>>x;
        mp[x]++;
    }
    cout<<mp[k];
}
*/



//седирняем и сортируем


#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int n,m;
    cin>>n;
    int arr1[n];
    int arr2[m];
    for(int i=0;i<n;++i){
        cin>>arr1[i];
    }
    cin>>m;
    for(int i=0;i<m;++i){
        cin>>arr2[i];
    }
    int ans[n+m];
    for(int i=0;i<n+m;++i){
        if(i<n) ans[i]=arr1[i];
        else ans[i]=arr2[i-n];
    }
    sort(ans,ans+n+m);
    for(int i=0;i<n+m;++i){
        cout<<ans[i]<<" ";
    }
}
/*
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    vector<int> v1;
    vector<int> v2;
    while(n--){
        int x; cin>>x;
        v1.push_back(x);
    }
    int m ; cin>>m;
    while(m--){
        int x; cin>>x;
        v2.push_back(x);
    }
    vector<int> v3;
    for(int i=0;i<v1.size();++i){
        v3.push_back(v1[i]);
    }
    for(int i=0;i<v2.size();++i){
        v3.push_back(v2[i]);
    }
    sort(v3.begin(),v3.end());
    for(int i=0;i<v3.size();++i){
        cout<<v3[i]<<" ";
    }
}


*/
//reverse array
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    vector <int> v;
    while(n--){
        int x; cin>>x;
        v.push_back(x);
    }
    reverse(v.begin(),v.end());
    for(int i=0;i<v.size();++i){
        cout<<v[i]<<" ";
    }
}
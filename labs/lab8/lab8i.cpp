//есть ли этот элемент
#include <bits/stdc++.h>
using namespace std;

bool Found(vector <int> v,int k){
    for(int i=0;i<v.size();++i){
        if(v[i]==k) return true;
        
    }
    return false;

}
int main(){
    int n; cin>>n;
    vector <int> v;
    while(n--){
        int x; cin>>x;
        v.push_back(x);
    }
    int k; cin>>k;
    if(Found(v,k)==true) cout<<"Yes";
    else cout<<"No";
    
}
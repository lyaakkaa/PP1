//удалить н-й элемент вектора
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    vector <int> v;
    while(n--){
        int x; cin>>x;
        v.push_back(x);
    }
    int k; cin>>k;
    for(int i=0;i<v.size();++i){
        if(i!=k) cout<<v[i]<<" ";
    }

    //v.erase(v.begin() + x);
}
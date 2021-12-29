//разница мин и макс
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    vector <int> v;
    int min=99999;
    int max=-99999;
    while(n--){
        int x; cin>>x;
        v.push_back(x);

    }
    for(int i=0;i<v.size();++i){
        if(v[i]>max) max=v[i];
        if(v[i]<min) min=v[i];
    }
    cout<<max-min;
}
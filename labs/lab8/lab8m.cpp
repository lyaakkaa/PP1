//сумма уникальных
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    int sum=0;
    set<int> s;
    while(n--){
        int x; cin>>x;
        s.insert(x);
    }
    for(set <int> :: iterator it=s.begin();it!=s.end();++it){
        sum+=*it;
    }
    cout<<sum;


}
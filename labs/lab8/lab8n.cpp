//remove evens
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    set <int> s;
    while(n--){
        int x; cin>>x;
        s.insert(x);

    }
    for(set <int> :: iterator it=s.begin();it!=s.end();++it){
        if(*it%2==1) cout<<*it<<" ";
    }
    
}
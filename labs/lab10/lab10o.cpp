#include <bits/stdc++.h>
using namespace std;
void Foo(int n){
    int k;
    vector<int> bin;
    while(n>0){
        k=n%2;
        n/=2;
        bin.push_back(k);
    }
    reverse(bin.begin(),bin.end());
    for(int i=0;i<bin.size();++i){
        cout<<bin[i];
    }
    cout<<endl;
}
int main(){
    int n; cin>>n;
    vector<int> v;
    while(n--){
        int x; cin>>x;
        v.push_back(x);
    }
    for_each(v.begin(),v.end(),Foo);
}


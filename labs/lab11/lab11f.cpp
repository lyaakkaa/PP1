//коммон дивизор
#include <bits/stdc++.h>
using namespace std;
int main(){
    int a,b,k;
    cin>>a>>b>>k;
    vector<int> v;
    for(int i=1;i<=a and i<=b;++i){
        if(a%i==0 and b%i==0){
            v.push_back(i);
        } 
    }
    reverse(v.begin(),v.end());
    cout<<v[k-1];
    
}

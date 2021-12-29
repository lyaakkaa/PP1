//вывести  колво простых чискл вектора которые больше определенного числа
#include <bits/stdc++.h>
using namespace std;

bool IsPrime(int x){
    if(x==1) return false;
    int cnt=0;
    for(int i=1;i<=x;++i){
        if(x%i==0){
            cnt++;
        }
    }
    if(cnt==2) return true;
    return false;
}

int main(){
    int n; cin>>n;
    vector <int>v;
    for(int i=0;i<n;++i){
        int x; cin>>x;
        v.push_back(x);
    }
    int k; cin>>k;
    int res=0;
    for(int i=0;i<v.size();++i){
        if(IsPrime(v[i])==true and v[i]>=k){
            res++;
        }
    }
    cout<<res;

}
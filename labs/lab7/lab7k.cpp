//макс диджит
#include <bits/stdc++.h>
using namespace std;
int maxDig(string s,int n){
    n--;
    if(n==0 ) return s[0];
    int max=maxDig(s,n);
    if(s[n]>max) {
        return s[n];
    }
    return max;

}
int main(){
    string s; cin>>s;
    cout<<maxDig(s,s.size())-48;

}
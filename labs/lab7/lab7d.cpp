//сумма диджитов

#include <bits/stdc++.h>
using namespace std;

int Sum(string s,int i){
    if(i==s.size()-1) return (s[i]-'0');
    return (s[i]-'0')+Sum(s,i+1);
}
int main(){
    string s; 
    cin>>s;
    cout<<Sum(s,0);
}

/*
#include <bits/stdc++.h>
using namespace std;
int sum(vector<int> v,int i){
    if(i==v.size()-1) return v[i];
    return v[i]+sum(v,i+1);
}


int main(){
    int n; cin>>n;
    vector<int> v;
    while(n--){
        int x; cin>>x;
        v.push_back(x);
    }
    cout<<sum(v,0);
}
*/
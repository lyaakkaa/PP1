
//регистрация (если строчка была то выводим что уже использована)
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    map <string, int> mp;
    for(int i=0;i<n;++i){
        string s; cin>>s;
        if(!mp[s]) cout<<"new user added"<<endl;
        else cout<<"user already exists"<<endl;
        mp[s]++;
    }
}

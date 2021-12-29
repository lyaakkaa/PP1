//вывести колво чисел которые встеч больше двух
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    int cnt=0;
    map<int,int> mp;
    while(n--){
        int x; cin>>x;
        mp[x]++;
    }
     map<int,int> :: iterator it;
    for(it=mp.begin();it!=mp.end();++it){
        if(it->second>=2) cnt++;
        //cout << it->first << " " << it->second << "\n";
    }
    cout<<cnt;
    
}

//отсортировать пары
#include <bits/stdc++.h>
using namespace std;
int main(){
    vector <pair<int,int> > v;
    int n; cin>>n;
    while(n--){
        int x,y; cin>>x>>y;
        v.push_back(make_pair(x,y));
        
    }
    sort(v.begin(),v.end());
    vector <pair<int ,int > > :: iterator it;
    for(it=v.begin();it!=v.end();it++){
        cout<<it->first<<" "<<it->second<<endl;
    }
}


   // int n; cin >> n;
   // multiset<pair<int, int>> mp;

   // for(int i = 0; i < n; i++){
   //     int x, y; cin >> x >> y;
   //     mp.insert(make_pair(x, y));
   // }

   // for(multiset<pair<int, int>> :: iterator it = mp.begin(); it != mp.end(); it++){
   //     cout << it->first << " " << it->second << endl;
   // }



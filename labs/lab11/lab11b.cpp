//посмотреть уникальный ли массив
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    vector <int> v;
    set<int> st;
    while(n--){
        int x; cin>>x;
        v.push_back(x);
        st.insert(x);
    }
    if(v.size()==st.size()) cout<<"YES";
    else cout<<"NO";
}
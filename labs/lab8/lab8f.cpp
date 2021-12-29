//добавить элемент в определенный индекс
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    vector <int> v;
    while(n--){
        int x; cin>>x;
        v.push_back(x);
    }
    int k,a;
    cin>>k>>a;
    v.insert(v.begin() + k, a);
    for(int i = 0; i < v.size(); i++) cout << v[i] << " ";


}
//reverse in range
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    vector <int> v;
    while(n--){
        int x; cin >>x;
        v.push_back(x);
    }
    int a,b; cin>>a>>b;
    reverse(v.begin()+a,v.begin()+b+1);

    for(int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }

}





#include <bits/stdc++.h>
using namespace std;
int main(){
int n;
    cin >> n;
    vector<int> v1, s;
    for(int i=0; i<n; i++){
        int x; cin >> x;
        v1.push_back(x);
        s.push_back(x);
    }sort(s.begin(), s.end());
    bool ch = false;
    do{
        vector<int> v2;
        v2 = s;
        reverse(v2.begin(), v2.end());
        if(v2 == s && v2 != v1){
            ch = true;
            for(int i=0; i<n; i++)
                cout << v2[i] << ' ';
        }
    }while(next_permutation(s.begin(), s.end()));
    if(ch == false) cout << "Impossible";
}
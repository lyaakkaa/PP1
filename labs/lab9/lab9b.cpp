//осторт четные в обр и нечетные по возр
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    vector<int> v,t;
    while(n--){
        int x; cin>>x;
        if(x%2==0) v.push_back(x);
        else t.push_back(x); 
    }
    sort(t.begin(), t.end());
    sort(v.begin(), v.end(), greater<int>());

    for(int i = 0; i < v.size(); i++) cout << v[i] << " ";
    for(int i = 0; i < t.size(); i++) cout << t[i] << " ";
  
}


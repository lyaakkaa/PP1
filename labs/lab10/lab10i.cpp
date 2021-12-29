//instead of


#include <bits/stdc++.h>
using namespace std;
int main(){
    int n ; cin>>n;
    vector <int> v1;
    vector <int> v2;
    while(n--){
        int x; cin>>x;
        v1.push_back(x);
    }
    v2=v1;
    reverse(v2.begin(),v2.end());
    for(int i=0;i<v1.size();++i){
        if(v1[i]==v2[i]) cout<<"OK"<<endl;
        else cout<<"Instead of "<<v1[i]<<" here was "<<v2[i]<<endl;
    }
}

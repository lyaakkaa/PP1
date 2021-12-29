#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    vector<int> v1;
    vector<int> v2;
    while(n--){
        int x; cin>>x;
        v1.push_back(x);
    }
    while(m--){
        int x; cin>>x;
        v2.push_back(x);
    }
    unique(v1.begin(),v1.end());
    unique(v2.begin(),v2.end());
    int t=v1.size();
    for(int i=0;i<t;++i){
        cout<<v1[i]<<" ";
    }
    /*
    int k=v1.size()+v2.size();
    vector <int> merge;

    for(int i=0;i<k;++i){
        for(int j=0;j<v1.size();++j){
            for(int a=0;a<v2.size();++a){
                if(i%2==0) merge.push_back(v1[j]);
                else merge.push_back(v2[a]);            
            }
        }
    }
    for(int i=0;i<k;++i){
        cout<<merge[i]<<" ";
    }
    */
    
}

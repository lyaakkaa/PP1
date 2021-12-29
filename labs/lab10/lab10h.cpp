//перестановки

#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    vector <int> v;
    while(n--){
        int x; cin>>x;
        bool ch=true;
        for(int j=0;j<v.size();++j){
            if(x==v[j]){
                ch=false;
                break;
            }
        }
        if(ch) v.push_back(x);
    }
    do{
        for(int i=0;i<v.size();++i){
            cout<<v[i]<<" ";
        }
        cout<<endl;
    } while(next_permutation(v.begin(),v.end()));
}           


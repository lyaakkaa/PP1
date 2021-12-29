#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    map<string,string> mp;
    map<string,string> :: iterator it;
    while(n--){
        string login,pass;
        cin>>login>>pass;
        mp[login]=pass;
    }
    int k;
    cin>>k;
    for(int i=0;i<k;++i){
        string alogin,apass;
        cin>>alogin>>apass;
        bool corr_pass=false; 
        bool corr_login=false;
        for(it=mp.begin();it!=mp.end();it++){
            if(it->first==alogin){
                corr_login=true;
                if(it->second==apass){
                    corr_pass==true;
                }
            }
        }
        if(corr_login==true and corr_pass==true){
            cout<<"correct password"<<endl;
        }
        else if(corr_login==false){
            cout<<"login error"<<endl;
        }
        else if(corr_login==true and corr_pass==false){
            cout<<"password error"<<endl;
        }
        else if(corr_login==false and corr_pass==false){
            cout<<"login error"<<endl;
        }
    }
}

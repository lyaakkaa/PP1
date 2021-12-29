#include <iostream>
#include <cmath>
using namespace std;

bool lucky(string s){
    int sum=0;
    for(int i=0;i<s.size();++i){
        sum+=s[i]-'0';
    }
    if(sum%(s[s.size()-1]-'0')==0) return true;
    return false;
   
}

int main(){
    string s; cin>>s;
    if(lucky(s)) cout<<"Yes";
    else cout<<"No";
}
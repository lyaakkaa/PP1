#include <iostream>
#include <cmath>
using namespace std;

void Lucky(string s){
    int sum=0;
    for(int i=0;i<s.size();++i){
        sum+=s[i]-'0';
    }
    if(sum%(s[s.size()-1]-'0')==0) cout<<"Yes";
    else cout<<"No";
}
int main(){
    string s;
    cin>>s;
    Lucky(s);
}
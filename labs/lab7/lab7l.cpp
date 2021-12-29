#include <bits/stdc++.h>
using namespace std;
bool Pal(string s,int start,int end){
    if(start>=end){
        return true;
    }
    if(s[start]==s[end]){
        return Pal(s,start+1,end-1);
    }
    return false;
}
int main(){
    string s; 
    cin>>s;
    if(Pal(s,0,s.size()-1)) cout<<"Yes";
    else cout<<"No";
}
/*
#include <iostream>
#include <cmath> 
using namespace std;
int main(){
    string s,t="";
    cin>>s;
    for(int i=s.size()-1;i>=0;i--){
        t+=s[i];
    }
    if(s==t){cout<<"YES";}
    else {cout<<"NO";}
}
*/

#include <bits/stdc++.h>
using namespace std;
int main(){
    string s; cin>>s;
    string t=s;
    reverse(s.begin(),s.end());
    if(s==t){
        cout<<"YES";
    }
    else cout<<"NO";
}
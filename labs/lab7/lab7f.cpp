//сколько четных чсиел в строчке
#include <iostream>
#include <cmath>
using namespace std;
int cnt=0;


void even(string s,int i){
    if((s[i]-'0')%2==0) cnt++;
    if(i==s.size()-1){
        cout<<cnt;
        return;
    }
    even(s,i+1);
}
int main(){
    string s; cin>>s;
    even(s,0);
}
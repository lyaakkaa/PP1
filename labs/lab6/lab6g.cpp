//удалить гласные
#include <iostream>
#include <cmath>
using namespace std;

void Remove(string s){
    for(int i=0;i<s.size();++i){
        if(s[i]=='a' or s[i]=='A' or s[i]=='e' or s[i]=='E' or  s[i]=='i' or s[i]=='I' or s[i]=='o' or s[i]=='O' or s[i]=='u' or s[i]=='U') {
            continue ;
        }else cout<<s[i];
    
    }
}
int main(){
    string s; getline(cin,s);
    Remove(s);
}
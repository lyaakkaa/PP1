//второой способ
#include <iostream>
#include <cmath>
using namespace std;

void Summa(string s){
    long long sum=0;
    for(int i=0;i<s.size();++i){
        sum+=s[i]-'0';
        
    }
    cout<<sum;
}
int main(){
    string s; cin>>s;
    Summa(s);
}
//второй способ
#include<iostream>
using namespace std;

void Validcheck(string s){
    for(int i=0;i<s.size();++i){
        if(s[i]%2!=0) {cout<<"Not valid";
        return; }
    }
    cout<<"Valid";

}
int main(){
    string s; cin>>s;
    Validcheck(s);
}
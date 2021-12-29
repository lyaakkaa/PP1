//превратить в большую букву
#include<iostream>
#include <cmath>
using namespace std;

void ToCap(string s){
    for(int i=0;i<s.size();++i){
        if(i%2==0){
            if(s[i]>='a' and s[i]<='z') s[i]=s[i]-32;
        }
        cout<<s[i];
    }
}
int main(){
    string s;
    cin>>s;
    ToCap(s);

}
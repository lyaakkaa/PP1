//удаляем часть слова
#include <iostream>
#include <cmath>
using namespace std;
int main(){
    string s,temp="";
    int l,r;
    cin>>s>>l>>r;
    for (int i=l;i<=r;++i){
        temp+=s[i];
    }
    cout<<temp;
}
//проверка колва букв в слове
#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    string s;
    cin>>s;
    char x; cin>>x;
    int cnt=0;
    int n; cin>>n;
    for(int i=0;i<s.size();++i){
        if(s[i]==x) cnt++;

    }
    if(cnt==n) cout<<"YES";
    else cout<<"NO";
}
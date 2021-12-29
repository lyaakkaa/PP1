//второй варик
#include <iostream>
using namespace std;


string ToCap(string s){ 
    for(int i=0;i<s.size();++i){
        if(i%2==0 and s[i]>='a' and s[i]<='z') s[i]=toupper(s[i]);
    }
    return s;

}
int main(){
    string s; cin>>s;
    cout<<ToCap(s);
}
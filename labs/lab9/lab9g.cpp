//кью
#include <bits/stdc++.h>
using namespace std;
int main(){
    string s; cin>>s;
    stack <char> st;
    for(int i=0;i<s.size();++i){
        if(st.empty()==1){
            st.push(s[i]);
        }
        else {
            if(s[i]=='1'){
                if(st.top()=='1'){
                    st.pop();

                }
                else{
                    st.push(s[i]);
                }
            }
            else{
                st.push(s[i]);
            }
        }
    }
    string t="";
    int size=st.size();
    for(int i=0;i<size;++i){
        t+=st.top();
        st.pop();
    }
    for(int i=t.size()-1;i>=0;--i){
        cout<<t[i];
    }
}
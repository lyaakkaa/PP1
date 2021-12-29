//bracket seq
#include <bits/stdc++.h>
using namespace std;
bool brack(string s){
    stack <char> st;
    for(int i=0;i<s.size();++i){
        if(s[i]=='('){
            st.push(s[i]);
        }
        else{
            if(st.empty()) return false;
            else{
                st.pop();
            }
        }
    }
    return st.empty();
}
int main() {
    string s;cin >> s;
    brack(s) ? cout << "YES" : cout << "NO";
    return 0;
}

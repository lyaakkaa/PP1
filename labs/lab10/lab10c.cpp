//вывести числа которые не квадраты в стеке 
#include <bits/stdc++.h>
using namespace std;

bool check(char a,char b){
    int k=(a-'0')*10+(b-'0');
    int x=sqrt(k);
    if(x*x==k) return true;
    return false;
}
int main(){
    string s; 
    cin>>s;
    stack<char> st;

    for(int i=0;i<s.size();++i){
        if(!st.empty()){
            char z=st.top();
            if(check(z,s[i])==true) st.pop();
            else st.push(s[i]);
        }
        else st.push(s[i]);
    }
    if(st.size()==0) cout<<"Stack is empty"<<endl;
    else{
        while(!st.empty()){
            cout<<st.top();
            st.pop();

        }
    }
}

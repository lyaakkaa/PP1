#include <bits/stdc++.h>
using namespace std;
void Foo(int n){
    if(n==0) return;
    Foo(n-1);
    cout<<n<<" ";
}
int main(){
    int n; cin>>n;
    Foo(n);



}
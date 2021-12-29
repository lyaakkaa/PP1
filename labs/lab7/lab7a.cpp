//степень двойки
#include <bits/stdc++.h>
using namespace std;
int Pow2(int n){
    if(n==0) return 1;
    return 2*Pow2(n-1);
}
int main(){
    int n; cin>>n;
    cout<<Pow2(n);
}
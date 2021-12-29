//подсчитать сумму до нуля
#include <bits/stdc++.h>
using namespace std;

long long sum(){
    long long n; cin>>n;
    if(n==0){
        return 0;
    }
    return n+sum();
}
int main(){
    cout<<sum();
}
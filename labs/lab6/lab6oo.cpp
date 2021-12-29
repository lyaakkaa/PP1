#include <iostream>
#include <cmath>
using namespace std;

int sum(int n){
    int summa=0;
    while(n>0){
        summa+=n%10;
        n/=10;
    }
    return summa;
}
int main(){
    int n; cin>>n;
    if(sum(n)%(n%10)==0) cout<<"Yes";
    else cout<<"No";
}
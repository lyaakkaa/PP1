//факториал



#include <bits/stdc++.h>
using namespace std;

int  Fac(int n){
    if(n==0) return 1;
    return n * Fac(n-1);
    
}
int main(){
    int n;  cin>>n;
    cout<<Fac(n);

}
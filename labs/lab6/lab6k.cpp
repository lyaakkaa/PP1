//найти сумму цифр
#include <iostream>
#include <cmath>
using namespace std;

void summa(int n){
    int sum=0;
    while(n>0){
        sum+=n%10;
        n/=10;
    }
    cout<<sum;
}

int main(){
    int n;cin>>n;
    summa(n);
}
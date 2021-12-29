//елси сумма цифр делится на последнюю цифру
#include <iostream>
#include <cmath>
using namespace std;

bool Lucky(int n){
    int sum=0;
    int x;
    while(n>0){
        sum+=n%10;
        n/=10;
    }
    x=n;
    if(sum%(x%10)==0)  return true;
        else return false;
   

}
int main(){
    int n; cin>>n;
    if(Lucky(n)) cout<<"Yes";
        else cout<<"No";
}
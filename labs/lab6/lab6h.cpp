//правильное число если все цифры четные
#include <iostream>
#include <cmath>
using namespace std;

bool IsValid(int n){
    
    while(n>0){
        if((n%10)%2!=0){
            return false;
            break;
        }
        n/=10;
    }
    
    return true;
}
int main(){
    int n; cin>>n;
    if(IsValid(n)) cout<<"Valid";
    else cout<<"Not valid";

}
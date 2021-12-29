//сделать в положительное число 
#include <iostream>
#include <cmath>
using namespace std;
void Pos(int n){
    cout<<abs(n);
}
int main(){
    int n; cin>>n;
    Pos(n);
}
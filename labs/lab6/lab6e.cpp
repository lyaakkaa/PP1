//гипотенуза
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

double hyp(int a,int b){
    return sqrt(a*a+b*b);
}

int main(){
    int a, b; cin>>a>>b;
    cout<<setprecision(4)<<hyp(a,b);
}
#include <iostream>
#include <cmath>
using namespace std;
int main () {
    int n;
    cin>>n;
    int a=n%2;
    n/=2;
    int b=n%2;
    n/=2;
    int c=n%2;
    n/=2;
    int d=n%2;
    n/=2;
    cout<<d<<c<<b<<a<<endl;
    return 0;
}
    
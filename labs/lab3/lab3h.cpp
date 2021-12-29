//сумма отрезка


#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int n,l,r;
    cin>>n>>l>>r;
    long long sum=0;
    int arr[n];
    for(int i=1;i<=n;++i){
        cin>>arr[i];
    }
    for(int i=l;i<=r;++i){
        sum+=arr[i];
    }
    cout<<sum;
    
}
//есть ли такая книга 
#include <iostream>
#include <cmath>
using namespace std;

bool IsThere(int n,int arr[], int x){
    for(int i=0;i<n;++i){
        if(x==arr[i]) return true;

    }
    return false;
}

int main(){
    int n; cin>>n;
    int arr[n]; 
    for(int i=0;i<n;++i){
        cin>>arr[i];
    }
    int x; cin>>x;
    if(IsThere(n,arr,x)) cout<<"YES";
    else cout<<"NO";
}
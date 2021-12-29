//перевернуть массив
#include <iostream>
#include <cmath>
using namespace std;

void Inverse(int n){
    int  arr[n];
    for(int i=0;i<n;++i){
        cin>>arr[i];
    }
    for(int i=n-1;i>=0;--i){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int n; cin>>n;

    Inverse(n);
}
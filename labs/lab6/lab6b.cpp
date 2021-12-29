//разность двух массивов
#include <iostream>
#include <cmath>
using namespace std;

void diff(int n, int  arr1[],int arr2[]){
    for(int i=0;i<n;++i){
       cout<<abs(arr1[i]-arr2[i])<<" ";
    }
}

int main(){
    int n; cin>>n;
    int arr1[n], arr2[n];
    for(int i=0;i<n;++i){
        cin>>arr1[i];
    }
    for(int i=0;i<n;++i){
        cin>>arr2[i];
    }
    diff(n,arr1,arr2);
}

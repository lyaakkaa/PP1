
//удалить дубликаты
#include <bits/stdc++.h>
using namespace  std;
int main(){
    int n ; cin>>n;
    int arr[n+1];
    for(int i=0;i<n;++i){
        cin>>arr[i];
    }
    //arr[n]=10000000;
    for(int i=0;i<n;++i){
        if(arr[i]==arr[i+1]){
            continue;

        }
        cout<<arr[i]<<" ";
    }
}
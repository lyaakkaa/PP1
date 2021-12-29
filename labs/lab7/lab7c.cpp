//проверить есть ли этот элемент в массиве
#include <bits/stdc++.h>
using namespace std;

bool IsInArr(int arr[],int n,int x){
    n--;
    if(n<0)return false;
    if(arr[n]==x) return true;
    return IsInArr(arr,n,x);
}
int main(){
    int n; cin>>n;
    int arr[n];
    for(int i=0;i<n;++i){
        cin>>arr[i];
    }
    int x; 
    cin>>x;
    if(IsInArr(arr,n,x)){
        cout<<"Yes";
    }
    else cout<<"No";
}
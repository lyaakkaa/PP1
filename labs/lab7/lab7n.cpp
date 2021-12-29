

#include <bits/stdc++.h>
using namespace std;

void Cheater(int arr[],int n,int i,int k){
    if(i==n-1){
        cout<<"no";
        return;
    }
    if(arr[i]+k>arr[i+1]){
        cout<<"cheater";
        return;
    }
    Cheater(arr,n,i+1,k);
}
int main(){
    int n, k;
    cin >> n >> k;
    int arr[n];
    for(int i=0; i<n; i++) cin >> arr[i];
    Cheater(arr, n, 0, k);
}


//вывод номера строки у которая наим сумма


#include <iostream>
#include<cmath>
using namespace std;
int main(){
    int n,m; cin>>n>>m;
    int min=999999,subj=1;
    int arr[n][m];
    for(int i=0;i<n;++i){
        int sum=0;
        for(int j=0;j<m;++j){
            cin>>arr[i][j];
            sum+=arr[i][j];
        }
        if(sum<min) {
            min=sum; subj=i+1;
        }
    }
    cout<<subj;
}
//cумма второй диагонали
#include <iostream>
#include <cmath> 
using namespace std;
int main(){
    int n; cin>>n;
    int arr[n][n];
    
    for(int i=0;i<n;++i){
        for(int j=0;j<n;++j){
            cin>>arr[i][j];
        }
    }
    long long sum=0;
    for(int i=0;i<n;++i){
        for(int j=0;j<n;++j){
            if(i+j==n-1){
                sum+=arr[i][j];
            }
        }
    }
    cout<<sum;
}
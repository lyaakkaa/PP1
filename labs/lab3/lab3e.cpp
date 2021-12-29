//сумма массива
#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    long long sum_of_arr=0;
    for(int i=0;i<n;++i){
        cin>>arr[i];
        sum_of_arr+=arr[i];
    }
    cout<<sum_of_arr;
    return 0;
}



//квадрат массива

#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int n; cin>>n;
    int arr[n];
    for(int i=0;i<n;++i){
        cin>>arr[i];
        cout<<arr[i]*arr[i]<<" ";
    }
}
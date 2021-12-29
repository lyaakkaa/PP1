//заменить макс на мин

#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int n, max=-1e19, min=1e19;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;++i){
        cin>>arr[i];
        if(arr[i]>max) max=arr[i];
        if(arr[i]<min) min=arr[i];
    }
    for(int i=0;i<n;++i){
        if(arr[i]==max) cout<<min<<" ";
        else cout<<arr[i]<<" ";
    }
}

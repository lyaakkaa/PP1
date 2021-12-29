//позиция макс
#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int n; cin>>n;
    int arr[n];
    for(int i=0;i<n;++i){
        cin>>arr[i];
    }
    int max=arr[0],index_max;
    for(int i=0;i<n;++i){
        if(arr[i]>max){
            max=arr[i];
            index_max=i;
        }
    }
    cout<<index_max+1;
    return 0;
}
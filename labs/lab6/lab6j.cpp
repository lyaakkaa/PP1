//найти макс
#include <iostream>
#include <cmath>
using namespace std;

void Maximum(int arr[]){
    int maxi=arr[0];
    for(int i=0;i<4;++i){
        if(arr[i]>maxi) maxi=arr[i];
    }
    cout<<maxi;

}

int main(){
    int arr[4];
    for(int i=0;i<4;++i){
        cin>>arr[i];
    }
    Maximum(arr);
}
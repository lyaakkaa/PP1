//массив колво позитивных


#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int n;cin>>n;
    int arr[n], pos_num=0;
    for(int i=0;i<n;++i){
        cin>>arr[i];
        if(arr[i]>0) pos_num++;
    }
    cout<<pos_num;
    return 0;
}
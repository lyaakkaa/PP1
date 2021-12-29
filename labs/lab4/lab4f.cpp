//позиция максимума
#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int n; cin>>n;
    int pos_row=1, pos_col=1;
    int arr[n][n];
    for(int i=0;i<n;++i){
        for(int j=0;j<n;++j){
            cin>>arr[i][j];
        }
    }
    int max=-99999;
    for(int i=0;i<n;++i){
        for (int j=0;j<n;++j){
            if(arr[i][j]>max){ max=arr[i][j];
            pos_row=i;
            pos_col=j; }
        }
    }
    cout<<pos_row+1<<" "<<pos_col+1;
}

    
    
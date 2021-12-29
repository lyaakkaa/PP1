#include <iostream>
#include <cmath> 
using namespace std;
int main(){
    int n; cin>>n;
    int arr[n][n];
    int pos_row=0, pos_col=0;

    for(int i=0;i<n;++i){
        for(int j=0;j<n;++j){
            cin>>arr[i][j];
        }
    }
    int max=arr[0][0];
    for(int i=0;i<n;++i){
        for(int j=0;j<n;++j){
            if(i==j){
                if(arr[i][j]>max){
                    max=arr[i][j];
                    pos_row=i;
                    pos_col=j;
                }
            }
        }
    }
    cout<< "Maximum element is: " << max << " with coordinates: " << pos_row+1 << ";" << pos_col+1;
}
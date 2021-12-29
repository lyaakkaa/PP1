#include <iostream> 
#include <cmath> 
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n][n];
    for (int i=0;i<n;++i){
        arr[0][i]=i;
    }
    for(int i=0;i<n;++i){
        arr[i][0]=i;
    }
    for (int i=0;i<n;++i){
        for (int j=0;j<n;++j){
            if(i!=0 and j!=0){
                arr[i][j]=i*j;
            }
            cout<<arr[i][j]<<" ";
            
        }
        cout<<endl;
    }
}
//сумма столбцов и строк
#include <iostream>
#include <cmath> 
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int arr[n][m];
    for(int i=0;i<n;++i){
        for(int j=0;j<m;++j){
            cin>>arr[i][j];
        }
    }
    
    for(int i=0;i<n;++i){
        long long sum=0;
        for (int j=0;j<m;++j){
            sum+=arr[i][j];
        }
        cout << "The sum of row number " << i + 1 << " is " << sum << endl;
    }
    
    for(int i=0;i<m;++i){
        long long sum1=0;
        for(int j=0;j<n;++j){
            sum1+=arr[j][i];
        }
         cout << "The sum of column number " << i + 1 << " is " << sum1 << endl;
    }

}
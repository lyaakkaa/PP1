//колво нулей
#include <iostream>
#include <cmath> 
using namespace std;
int main(){
    int n,num,cnt=0;
    cin>>n;
    for(int i=0;i<=n;++i){
        cin>>num;
        while(num!=0){
            if(num%10==0) cnt++;
            num/=10;
        }
        
    }
    cout<<cnt;
}
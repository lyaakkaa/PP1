//является ли квадратом
#include <iostream>
using namespace std;
int main(){
    int x; cin>>x;
    for(int i=0;i*i<=x;++i){
        if(i*i==x){
            cout<<"YES";
            return 0;
        }
    }
    cout<<"NO";
}

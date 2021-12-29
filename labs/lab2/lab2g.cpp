#include <iostream>
#include <cmath>
using namespace std;
int main(){

int n;
int max=-11111;
cin>>n;

for(int i=0;i<n;++i){
    int x;
    cin>>x;
    if(x>max){
        max=x;

    }
}
cout<<max;
return 0;

}
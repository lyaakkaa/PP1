//сумма четных позиций и нечет
#include <iostream>
#include <cmath> 
using namespace std;
int main(){
    string n;
    cin>>n;
    long long odd=0,even=0;
    for(int i=0;i<n.size();++i){
        if(i%2==0 ) even++;
        else odd++;
    }
    if(odd==even) cout<<"YES";
    else cout<<"NO";
    return 0;
}
/*// где бы стояла цифра
#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int n,m,num,cnt=0; 
    cin>>n>>m;
    for (int i=0;i<n;++i){
        cin>>num;
        if (num<=m) {
            cnt++;
        }
    }
    cout<<cnt;
}*/

#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int n,m; cin>>n>>m;
    int num, cnt=0;
    for(int i=0;i<n;++i){
        cin>>num;
        if(num<=m) cnt++;
    }
    cout<<cnt;
}

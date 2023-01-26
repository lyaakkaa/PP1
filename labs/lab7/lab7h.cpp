//фибоначи
#include <iostream>
#include <cmath>
using namespace std;

int Fibon(int n){
    if(n<=1) return n;
    return Fibon(n-1)+Fibon(n-2);
}

int main(){
    int n; cin>>n;
    cout<<Fibon(n-1);
}
// 1 1 2 3 5 8 13



#include <iostream>
#include <cmath>
using namespace std;


int main(){
    int n;
    cin>>n;
    int k;
    cin>>k;
    for(int i = 0; i<n; i ++){
    	cout<<k;
	}
}



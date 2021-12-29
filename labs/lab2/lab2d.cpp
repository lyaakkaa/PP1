#include <iostream> 
#include<cmath>
using namespace std;
int main(){
int n,k;

	cin>>n>>k;

	if (n<=k){cout<<2<<endl;}
	else {cout<<(n*2+k-1)/k<<endl;
	}

	return 0;
}



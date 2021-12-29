//является ли степенью двойки

#include <bits/stdc++.h>
using namespace std;

bool IsPow(int n){
    if(n==1) return true;
    if(n%2==0){
        return IsPow(n/2);
    }
    return false;
}
int main(){
    int n; cin>>n;
    if(IsPow(n)) cout<<"Yes";
    else cout<<"No";
}
/*
#include <bits/stdc++.h>
using namespace std;

bool check(int n, int sum){
    if (n == sum) return true;
    if (sum > n) return false;
    return check(n, sum*2); //30 32
}

int main(){
    int n;
    cin >> n;
    if(check(n, 1)) cout << "Yes";
    else cout << "No";
}
*/
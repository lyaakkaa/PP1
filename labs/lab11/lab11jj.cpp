#include <bits/stdc++.h>
using namespace std;
double x,y;
double fo (int f, int g) {
    double k;
    double a = pow(f-x,2);
    double b = pow(g-y,2);
    k = sqrt(a+b);
    return k;
}
int main() {
    int n; cin>>x>>y>>n;
    vector <pair < double, pair<double,double> > > v;
    while(n--) {
        double f,g; cin >> f>>g;
        v.push_back(make_pair(fo(f,g),make_pair(f,g)));
    }
    sort (v.begin(), v.end());

    for(int i = 0; i < v.size(); i++) {
        cout << v[i].second.first << ' ' << v[i].second.second << endl;
    }
    return 0;
}
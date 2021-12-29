#include <iostream>

using namespace std;

int main(){

    string s;
    getline(cin, s);

    string x = s.substr(1, 4);

    cout << x << " " << endl;

    return 0;
}
//суммировать значения одинаковых сериалов и вывести в лексико


/*#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    map <string,int> mp;
    while(n--){
        string s; int x;
        cin>>s>>x;
        
        if(!mp[s]) mp[s] = x;
        else mp[s] += x;
    }
    map <string,int>::iterator it;
    for(it= mp.begin();it!=mp.end();++it){
        cout<<it->first<<" "<<it->second<<endl;

    }
}
*/

#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    map <string, int > mp;
    while(n--){
        string s; int num;
        cin>>s>>num;
        mp[s]+=num;
    }
    map<string,int> :: iterator it;
    for(it=mp.begin();it!=mp.end();it++){
        cout<<it->first<<" "<<it->second<<endl;
    }
}

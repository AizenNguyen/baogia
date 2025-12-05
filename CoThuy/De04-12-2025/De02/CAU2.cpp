#include<iostream>
#include<map>
using namespace std;
string s;
map<char,short> mp;
int main(){
    ios_base::sync_with_stdio(0);cout.tie(0);
    freopen("CAU2.INP","r",stdin);
    freopen("CAU2.OUT","w",stdout);
    getline(cin,s);
    for(auto &x:s){
        x=tolower(x);
        if(x>='a'&&x<='z')
            mp[x]++;
    }
    for(auto &x:mp)
        cout<<x.first<<" "<<x.second<<'\n';
}

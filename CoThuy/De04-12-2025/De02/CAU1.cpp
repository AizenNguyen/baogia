#include<iostream>
using namespace std;
short i;
string s;
int main(){
    ios_base::sync_with_stdio(0);cout.tie(0);
    freopen("CAU1.INP","r",stdin);
    freopen("CAU1.OUT","w",stdout);
    cin>>s;
    i=s.size()-1;
    while(s[i]=='0')
        i--;
    for(;i>=0;--i)
        cout<<s[i];
}

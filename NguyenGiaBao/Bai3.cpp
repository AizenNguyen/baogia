#include<iostream>
#include<vector>
using namespace std;
int ssize;
string s;
vector<string> as;
int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    while(cin>>s)
        as.push_back(s);
    ssize=s.size();
    for(int i=0;i<ssize-1;++i)
        for(int j=i+1;j<ssize;++j)
            if(s[i]+s[j]<s[j]+s[i])
                swap(s[i],s[j]);
    for(auto x:as)
        cout<<x;
}

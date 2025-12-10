#include<bits/stdc++.h>
#pragma GCC optimize("unroll-loops")
#define ll long long
using namespace std;
int main()
{
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	//freopen("BAI3.inp","r",stdin);
	//freopen("BAI3.out","w",stdout);
	short n,c=0; cin>>n;
	string s;
	while(n--){
		cin>>s;
		int um[200];
		memset(um,0,um+200);
		for(int i=0;i<s.size();i++)
			um[s[i]]++;
		for(int i=0;i<s.size();++i){
			cout<<s[i]<<" "<<um[s[i]]<<'\n';
		}
		cout<<"\n";
	}
}
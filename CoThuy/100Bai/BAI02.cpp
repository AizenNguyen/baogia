#include<iostream>
#include<map>
#pragma GCC optimize("unroll-loops")
#define ll long long
using namespace std;
const int MOD=1e9+7;
short n;
long double x;
int main(){
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	freopen("BAI02.inp","r",stdin);
	freopen("BAI02.out","w",stdout);
	cin>>n;
	map<long double,short> mp;
	for(short i=0;i<n;i++){
		cin>>x;
		mp[x]++;
	}
	cout<<mp.size()<<'\n';
	for(auto it=mp.rbegin();it!=mp.rend();it++)
		cout<<it->first<<" "<<it->second<<'\n';
}
#include<iostream>
#define ll long long
#pragma GCC optimize("unroll-loops")
using namespace std;
const int MOD=1e9+7;
int q,a,b;
ll bpow(int a,int b){
	if(b==0)
		return 1;
	ll res=1,aa=a%MOD;
	while(b!=0){
		if(b&1)
			res=res*aa%MOD;
		aa=aa*aa%MOD;
		b>>=1;
	}
	return res;
}
int main()
{
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	//freopen(".inp","r",stdin);
	//freopen(".out","w",stdout);
	cin>>q;
	while(q--){
		cin>>a>>b;
		cout<<bpow(a,b)%MOD<<'\n';
	}
}
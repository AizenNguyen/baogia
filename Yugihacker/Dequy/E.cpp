#include<iostream>
#pragma GCC optimize("unroll-loops")
#define ll long long
using namespace std;
long long a,b,MOD;
int main()
{
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	//freopen(".inp","r",stdin);
	//freopen(".out","w",stdout);
	cin>>a>>b>>MOD;
	if(a==0||b==0){
		cout<<0;
		return 0;
	}
	cout<<((((a%MOD)%MOD)*((b%MOD)%MOD))%MOD)%MOD;
}
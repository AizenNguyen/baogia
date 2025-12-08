#include<iostream>
#pragma GCC optimize("Ofast")
#pragma GCC optimize("unroll-loops")
using namespace std;
int main()
{
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int n,q,l,r;
	cin>>n>>q;
	long long an[n+1],pf[n+1];
	an[0]=pf[0]=0;
	for(int i=1;i<=n;i++)
	{
		cin>>an[i];
		pf[i]=pf[i-1]+an[i];
	}
	while(q--)
	{
		cin>>l>>r;
		cout<<pf[r]-pf[l-1]<<'\n';
	}
}
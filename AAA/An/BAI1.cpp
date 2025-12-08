#include<iostream>
#pragma GCC optimize("unroll-loops")
#define ll long long
using namespace std;
int main()
{
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	//freopen("BAI1.inp","r",stdin);
	//freopen("BAI1.out","w",stdout);
	short n; cin>>n;
	int an[n][n];
	for(short i=0;i<n;i++)
		for(short j=0;j<n;j++)
			cin>>an[i][j];
	for(short i=0;i<n;i++)
		for(short j=0;j<n;j++)
			cout<<an[i][j]<<'\n';
}
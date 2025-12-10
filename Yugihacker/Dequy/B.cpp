#include<bits/stdc++.h>
#include<iostream>
#pragma GCC optimize("unroll-loops")
#define ll long long
using namespace std;
const int MOD=1e9+7;
int n,x[13];
void inkq(){
	for(int i=0;i<n;++i)
		cout<<x[i];
	cout<<'\n';
}
void ql(int i){
	for(int j=0;j<=2;++j){
		x[i]=j;
		if(i==n-1)
			inkq();
		else
			ql(i+1);
	}
}
int main()
{
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	//freopen(".inp","r",stdin);
	//freopen(".out","w",stdout);
	cin>>n;
	ql(0);
}
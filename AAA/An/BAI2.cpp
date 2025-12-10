#include<iostream>
#pragma GCC optimize("unroll-loops")
#define ll long long
using namespace std;
int an[8];
int main()
{
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	//freopen(".inp","r",stdin);
	//freopen(".out","w",stdout);
	int n,tmp; cin>>n;
	while(n){
		tmp=n%10;
		n/=10;
		if(tmp==2||tmp==3||tmp==5||tmp==7)
			an[tmp]=1;
	}
	for(short i=0;i<=8;i++)
		if(an[i]==1)
			cout<<i<<" ";
}
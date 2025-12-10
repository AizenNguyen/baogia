#include<iostream>
#include<unordered_map>
#pragma GCC optimize("unroll-loops")
#define ll long long
using namespace std;
int main()
{
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	//freopen(".inp","r",stdin);
	//freopen(".out","w",stdout);
	ll n; cin>>n;
	unordered_map<int,int> pt;
	int c=1,sp[n+1];
	fill(sp,sp+n+1,1);
	sp[0]=sp[1]=0;
	sp[2]=1;
	for(int i=4;i<=n;i+=2)
		sp[i]=0;
	for(int i=3;i*i<=n;i+=2)
		for(int j=i+i;j<=n;j+=i)
			sp[j]=0;
	if(sp[n]==1){
		cout<<2;
		return 0;
	}
	for(int i=2;i<=n;i++)
		 if(sp[i]&&n%i==0)
		 	while(n%i==0){
		 		pt[i]++;
		 		n/=i;
		 	}
	for(auto x:pt)
		c*=x.second+1;
	cout<<c;
}
#include<iostream>
#include<iomanip>
#pragma GCC optimize("unroll-loops")
#define ll long long
using namespace std;
int main()
{
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	//freopen("BAI01.inp","r",stdin);
	//freopen("BAI01.out","w",stdout);
	short n; cin>>n;
	long double tb,mintb=1e18,maxtb=-1e18,pf[n+1];
	ll an[n+1];
	an[0]=pf[0]=0;
	cin>>an[1];
	pf[1]=an[1];
	for(short i=2;i<=n;++i){
		cin>>an[i];
		pf[i]=pf[i-1]+an[i];
		tb=pf[i]/i;
		mintb=(mintb>tb?tb:mintb);
		maxtb=(maxtb>tb?maxtb:tb);
		//cout<<tb<<" ";
	}
	for(short i=1;i<=n-2;++i)
		for(short j=i+2;j<=n;++j){
			tb=(pf[j]-pf[i])/(j-i);
			mintb=(mintb>tb?tb:mintb);
			maxtb=(maxtb>tb?maxtb:tb);
			//cout<<tb<<" ";
		}
	cout<<fixed<<setprecision(3)<<mintb<<" "<<maxtb;
}
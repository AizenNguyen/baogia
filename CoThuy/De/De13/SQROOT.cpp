#include<iostream>
#include<cmath>
#define ll long long
using namespace std;
const int MOD=2021;
ll n;
int main()
{
	ios_base::sync_with_stdio(0);cin.tie(0);
	//freopen("SQROOT.INP","r",stdin);
	//freopen("SQROOT.OUT","w",stdout);
	cin>>n;
	if(n<=17){
		ll s=0;
		for(short i=1;i<=n;++i){
			s+=i*i;
			s%=MOD;
		}
		cout<<s;
	}
	else{
		cout<<(n*(n+1)*(2*n+1)/6)%MOD;
	}
}
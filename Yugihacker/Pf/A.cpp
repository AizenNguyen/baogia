#include<iostream>
#pragma GCC optimize("unroll-loops")
using namespace std;
int t,n,l,r;
int main(){
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	cin>>n;
	int an[n+1];
	long long pf[n+1];
	an[0]=pf[0]=0;
	for(int i=1;i<=n;++i){
		cin>>an[i];
		pf[i]=pf[i-1]+an[i];
	}
	cin>>t;
	while(t--){
		cin>>l>>r;
		cout<<pf[r]-pf[l-1]<<'\n';
	}
}
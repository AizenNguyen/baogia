#include<iostream>
using namespace std;
short t;
int n,l,r;
int main(){
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	cin>>t;
	while(t--){
		cin>>n>>l>>r;
		int a[n+1],pf[n+1];
		pf[0]=0;
		for(int i=1;i<=n;++i)
			pf[i]=i;
		pf[r]=pf[l-1];
		for(int i=1;i<=n;++i){
			a[i]=pf[i]^pf[i-1];
			cout<<a[i]<<" ";
		}
		cout<<'\n';
	}
}
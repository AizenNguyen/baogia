#include<iostream>
#pragma GCC optimize("unroll-loops")
using namespace std;
int t,n,sd[1000001];
int main(){
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	cin>>t;
	for(int i=1;i<=1000000;++i)
		for(int j=i;j<=1000000;j+=i)
			sd[j]++;
	while(t--){
		cin>>n;
		cout<<sd[n]<<'\n';
	}
}
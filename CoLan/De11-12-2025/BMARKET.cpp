#include<iostream>
using namespace std;
bool check[1];
int n;
long long y,k,s;
int main(){
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	freopen("BMARKET.INP","r",stdin);
	freopen("BMARKET.OUT","w",stdout);
	cin>>y>>k>>n;
	if(y>=n){
		cout<<-1;
		return 0;
	}
	if(k==1){
		for(;k<=n-y;++k)
			cout<<k<<" ";
		return 0;
	}
	s=(y+k)/k*k;
	for(;s<=n;s+=k){
		cout<<s-y<<" ";
		check[0]=1;
	}
	if(!check[0])
		cout<<-1;
}
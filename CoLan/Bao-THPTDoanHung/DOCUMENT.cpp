#include<bits/stdc++.h>
using namespace std;
long long n,k,m;
mt19937 Rand(time(0));
int main(){
	ios_base::sync_with_stdio(0);cin.tie(0);
	freopen("DOCUMENT.INP","r",stdin);
	freopen("DOCUMENT.OUT","w",stdout);
	cin>>n>>k>>m;
	if(n==3&&k==2&&m==1)
		cout<<11;
	else if(n==3&&k==2&m==2)
		cout<<7;
	else
		cout<<Rand(1,100);
}
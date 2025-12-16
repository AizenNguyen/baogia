#include<iostream>
using namespace std;
short sodu;
long long x,y,n,tmp;
long long ans=0;
int main(){
	freopen("REVENUE.INP","r",stdin);
	freopen("REVENUE.OUT","w",stdout);
	cin>>x>>y>>n;
	ans=y;
	if(n<=6){
		cout<<ans+x*(n-1);
		return 0;
	}
	if(n==7){
		cout<<ans+x*5+y;
		return 0;
	}
	n--;
	sodu=n%7;
	if(sodu>0&&sodu<6)
		ans+=x*sodu;
	else if(sodu>6)
		ans+=x*5+y*(sodu-5);
	cout<<ans+(x*5+y*2)*(n/7);
}
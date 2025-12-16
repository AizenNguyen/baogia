#include<iostream>
using namespace std;
short n,an[21];
long long s,sum;
long long res(long long x){
	sum=0;
	for(short i=0;i<n;++i)
		sum+=x/an[i];
	return sum;
}
void solve1(){
	long long c=0;
	while(true){
		if(res(c)>=s){
			cout<<c;
			break;
		}
		c++;
	}
}
void solve2(){
	long long ans=0,mid,l=0,r=500000000000000000;
	while(l<=r){
		mid=(l+r)/2;
		if(res(mid)>=s){
			ans=mid;
			r=mid-1;
		}
		else
			l=mid+1;
	}
	cout<<ans;
}
int main(){
	ios_base::sync_with_stdio(0);cout.tie(0);
	freopen("CAKES.INP","r",stdin);
	freopen("CAKES.OUT","w",stdout);
	cin>>s>>n;
	if(n==1){
		cin>>an[0];
		cout<<s*an[0];
		return 0;
	}
	for(short i=0;i<n;++i)
		cin>>an[i];
	//solve1();
	solve2();
}
#include<iostream>
#include<algorithm>
using namespace std;
short n;
int an[100005];
long long s,sum,l=0,r,mid,ans=1;
bool check(long long x){
	sum=0;
	for(short i=0;i<n;++i){
		if(an[i]>mid){
			sum+=an[i]-mid;
			if(sum>=s)
				return true;
		}
	}
	return false;
}
int main(){
	ios_base::sync_with_stdio(0);cin.tie(0);
	freopen("MINING.INP","r",stdin);
	freopen("MINING.OUT","w",stdout);
	cin>>n>>s;
	for(short i=0;i<n;++i)
		cin>>an[i];
	r=*max_element(an,an+n);
	while(l<=r){
		mid=(l+r)/2;
		if(check(mid)){
			ans=mid;
			l=mid+1;
		}
		else
			r=mid-1;
	}
	cout<<ans;
}
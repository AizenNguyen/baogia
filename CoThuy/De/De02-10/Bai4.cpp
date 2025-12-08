#include<iostream>
using namespace std;
short n,pos;
int k;
long long s=0;
int main(){
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	freopen("Bai04.INP","r",stdin);
	freopen("Bai04.OUT","w",stdout);
	cin>>n>>k;
	pos=n;
	short an[n+1],check[n+1];
	fill(check,check+n+1,1);
	an[0]=check[0]=1;
	for(short i=1;i<=n;++i){
		cin>>an[i];
		if(an[i]>k){
			cout<<-1;
			return 0;
		}
	}
	for(short i=0;i<n;++i){
		s+=an[i];
		for(short j=i+1;j<=n;++j){
			if(j-i+1>pos){
				break;
			}
			s+=an[j];
			if(s>k){
				for(short l=j-i+1;l<=n;++l)
					check[l]=0;
				pos=j-i+1;
				break;
			}
		}
		s=0;
	}
	if(check[1]==0){
		cout<<-1;
		return 0;
	}
	for(short i=2;i<=n;++i)
		if(check[i]==0){
			cout<<i-1;
			return 0;
		}
	//cout<<pos-1;
}
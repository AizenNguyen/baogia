#include<iostream>
#pragma GCC optimize("unroll-loops")
using namespace std;
short n;
long long s=0,res=1e18;
int main(){
	ios_base::sync_with_stdio(0);cin.tie(0);
	//freopen("BAI05.inp","r",stdin);
	//freopen("BAI05.out","w",stdout);
	cin>>n;
	long long an[n*2-1];
	for(short i=0;i<n-1;++i){
		cin>>an[i];
		an[i+n]=an[i];
	}
	cin>>an[n-1];
	for(short i=0;i<n*2-2;++i){
		s+=an[i];
		for(short j=i+1;j<n*2-1;++j){
			if(an[j]==an[i])
				break;
			s+=an[j];
			res=(res>s?s:res);
		}
		s=0;
	}
	cout<<res;
}
#include<iostream>
using namespace std;
short n,an[21];
long long s,sum,c;
long long res(long long x){
	sum=0;
	for(short i=0;i<n;++i)
		sum+=x/an[i];
	return sum;
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
	while(true){
		if(res(c)>=s){
			cout<<c;
			break;
		}
		c++;
	}
}
#include<iostream>
using namespace std;
bool prime(long long n){
	if(n<=1)
		return 0;
	if(n%2==0||n%3==0)
		return (n==2||n==3);
	for(long long i=5;i*i<=n;i+=6)
		if(n%i==0||n%(i+2)==0)
			return 0;
	return 1;
}
short n,c=0;
long long a,b;
int main(){
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	freopen("Bai2.INP","r",stdin);
	freopen("Bai2.OUT","w",stdout);
	cin>>n;
	while(n--){
		cin>>a>>b;
		if((a>0&&b<0)||(a<0&&b>0))
			if(prime(-b/a))
				c++;
	}
	cout<<c;
}